#ifndef REPLXX_CONVERSION_HXX_INCLUDED
#define REPLXX_CONVERSION_HXX_INCLUDED 1

#include "ConvertUTF.h"

#ifdef __has_include
#if __has_include( <version> )
#include <version>
#endif
#endif

#if defined(__cplusplus) && __cplusplus < 202002L
namespace replxx {
typedef unsigned char char8_t;
}
#endif

namespace replxx {

ConversionResult copyString8to32( char32_t* dst, int dstSize, int& dstCount, char const* src );
ConversionResult copyString8to32( char32_t* dst, int dstSize, int& dstCount, char8_t const* src );
int copyString32to8( char* dst, int dstSize, char32_t const* src, int srcSize );

namespace locale {
extern bool is8BitEncoding;
}

}

#endif
