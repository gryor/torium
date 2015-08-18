#include <nan/nan.h>
#include "torium.h"
#include <sodium.h>


namespace torium {
class Random : public Nan::AsyncWorker
{
public:
	Random(Nan::Callback * callback, v8_size_t size): Nan::AsyncWorker(callback), _size(size) {
		_content = new char[_size];
	}

	void Execute() {
		randombytes_buf(_content, _size);
	}

	void HandleOKCallback()
	{
		Nan::HandleScope scope;
		v8::Local<v8::Value> argv[] = {TORIUM_BUFFER(_content, _size)};
		callback->Call(1, argv);
	}

protected:
	v8_size_t _size;
	char * _content;
};

NAN_METHOD(random)
{
	Nan::AsyncQueueWorker(new Random(TORIUM_CALLBACK(1), TORIUM_SIZE(0)));
}
}
