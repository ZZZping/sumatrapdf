/* copy of mupdf/scripts/freetype/slimftoptions.h */
/* TODO: use mupdf/scripts/freetype/slimftoptions.h directly */

/* custom ftoption.h which selects the minimum features needed by mupdf */

#include <freetype/config/ftoption.h>

#undef FT_CONFIG_OPTION_USE_LZW
#undef FT_CONFIG_OPTION_USE_ZLIB
#undef FT_CONFIG_OPTION_USE_BZIP2
#undef FT_CONFIG_OPTION_USE_PNG
#undef FT_CONFIG_OPTION_USE_HARFBUZZ
#undef FT_CONFIG_OPTION_MAC_FONTS
#undef FT_CONFIG_OPTION_INCREMENTAL
#undef FT_CONFIG_OPTION_SUBPIXEL_RENDERING

#undef TT_CONFIG_OPTION_EMBEDDED_BITMAPS
#undef TT_CONFIG_OPTION_SFNT_NAMES
#undef TT_CONFIG_OPTION_GX_VAR_SUPPORT
#undef TT_CONFIG_OPTION_BDF

#undef T1_CONFIG_OPTION_NO_AFM
#undef T1_CONFIG_OPTION_NO_MM_SUPPORT

#undef CFF_CONFIG_OPTION_OLD_ENGINE

/* Temporary workaround for freetype bug #57519 */
#define T1_CONFIG_OPTION_OLD_ENGINE 1
