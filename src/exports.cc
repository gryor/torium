#include <nan/nan.h>
#include "torium.h"


#define EXPORT(name) Nan::Set(target, NAN_TEXT(name), Nan::GetFunction(Nan::New<v8::FunctionTemplate>(torium::name)).ToLocalChecked())
#define EXPORT_INT(name, value) target->ForceSet(NAN_TEXT(name), Nan::New<v8::Integer>(value), v8::ReadOnly)

NAN_MODULE_INIT(Init) {
	EXPORT(random);
}

NODE_MODULE(torium, Init)

#undef EXPORT
