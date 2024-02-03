// Automatically generated C++ file on Thu Jan 18 13:17:13 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD sampling_test.cpp kernel32.lib

double
yk=0, yk_1=0, yk_2=0;

union uData
{
   bool b;
   char c;
   unsigned char uc;
   short s;
   unsigned short us;
   int i;
   unsigned int ui;
   float f;
   double d;
   long long int i64;
   unsigned long long int ui64;
   char *str;
   unsigned char *bytes;
};
// int DllMain() must exist and return 1 for a process to load the .DLL
// See https://docs.microsoft.com/en-us/windows/win32/dlls/dllmain for more information.
int __stdcall DllMain(void *module, unsigned int reason, void *reserved) { return 1; }

// #undef pin names lest they collide with names in any header file(s) you might include.
#undef in0
#undef in1
#undef in2
#undef in3
#undef out0
#undef out1
#undef out2
#undef out3

extern "C" __declspec(dllexport) void sampling_test(void **opaque, double t, union uData *data)
{
   double  in0  = data[0].d; // input
   double  in1  = data[1].d; // input
   double  in2  = data[2].d; // input
   double  in3  = data[3].d; // input
   double &out0 = data[4].d; // output
   double &out1 = data[5].d; // output
   double &out2 = data[6].d; // output
   double &out3 = data[7].d; // output
// Implement module evaluation code here:

      if ((in1>0.999)&&(in1<=1.001)) { yk_2= yk_1;
                                       yk_1= yk;
                                       yk=in0;}
      out0= yk;
      out1= yk_1;
      out2= yk_2;
}
