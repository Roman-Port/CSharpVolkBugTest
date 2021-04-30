#define DLLEXPORT __declspec(dllexport)

//In volk_typedefs.tmpl.h
typedef void (*p_test)();

//In volk.tmpl.h
extern DLLEXPORT p_test Test;
