/*
 * Class TUPLE_ARG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_909 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_909 [] = {0xFF11,237,0xFF12,908,0xFFFF};
static EIF_TYPE_INDEX gen_type2_909 [] = {0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type3_909 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_909 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_909 [] = {0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type6_909 [] = {0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type7_909 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_909 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_909 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_909 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_909 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_909 [] = {0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type13_909 [] = {0xFF11,253,0xFF11,904,0xFFFF};


static struct desc_info desc_909[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_909},
	{1, (BODY_INDEX)-1, 237, gen_type1_909},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 908, gen_type2_909},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_909},
	{14, (BODY_INDEX)-1, 0, gen_type4_909},
	{15, (BODY_INDEX)-1, 908, gen_type5_909},
	{16, (BODY_INDEX)-1, 908, gen_type6_909},
	{17, (BODY_INDEX)-1, 0, gen_type7_909},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_909},
	{12882, (BODY_INDEX)-1, 219, gen_type9_909},
	{22, (BODY_INDEX)-1, 219, gen_type10_909},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_909},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 908, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 908, gen_type12_909},
	{12880, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12881, 0, 253, gen_type13_909},
};

extern void Init909(void);
void Init909(void)
{
	IDSC(desc_909, 0, 908);
	IDSC(desc_909 + 1, 1, 908);
	IDSC(desc_909 + 32, 369, 908);
}


#ifdef __cplusplus
}
#endif
