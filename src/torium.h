#ifndef TORIUM_H_NHHAQ3DF
#define TORIUM_H_NHHAQ3DF


#include <nan/nan.h>
#include <stdint.h>

#ifndef NAN_TEXT
#define NAN_TEXT(text) Nan::New<v8::String>(#text).ToLocalChecked()
#endif

#define TORIUM_BUFFER_DATA(i) node::Buffer::Data(info[i].As<v8::Object>())
#define TORIUM_BUFFER_SIZE(i) node::Buffer::Length(info[i].As<v8::Object>())
#define TORIUM_BUFFER(content, size) Nan::NewBuffer(content, size).ToLocalChecked()
#define TORIUM_CALLBACK(i) new Nan::Callback(info[i].As<v8::Function>())
#define TORIUM_SIZE(i) Nan::To<v8_size_t>(info[i].As<v8::Number>()).FromJust()

namespace torium
{
typedef uint32_t v8_size_t;

NAN_METHOD(random);
}


#endif // end of include guard: TORIUM_H_NHHAQ3DF
