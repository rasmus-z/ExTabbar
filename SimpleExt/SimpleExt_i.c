

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for SimpleExt.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IBandObject,0x20C53787,0xC1BA,0x4AEB,0xBF,0x10,0x61,0xAC,0xD6,0xA7,0x89,0x29);


MIDL_DEFINE_GUID(IID, IID_ISimpleShlExt,0x2A0D8430,0xF0ED,0x4103,0xB6,0x27,0x66,0x67,0x63,0xB6,0xF8,0x0F);


MIDL_DEFINE_GUID(IID, LIBID_SIMPLEEXTLib,0xA5C66843,0xDE62,0x4c71,0xA7,0x44,0xB6,0x4B,0xE9,0x5E,0xAA,0xBA);


MIDL_DEFINE_GUID(CLSID, CLSID_BandObject,0x56419827,0x78E0,0x43ED,0x9E,0x20,0x2B,0x6B,0x1C,0x7A,0xF5,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_SimpleShlExt,0x9FD4B86D,0x2BB8,0x423d,0xAC,0xB0,0xE6,0xD1,0xC9,0xA7,0xB4,0x7D);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



