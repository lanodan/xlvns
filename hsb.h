#ifndef __INCLUDE_HSB_H
#define __INCLUDE_HSB_H

short rgb_to_hsb[] = {
	0x0000,0x0811,0x0822,0x0833,0x0844,0x0855,0x0866,0x0877,
	0x0888,0x0899,0x08aa,0x08bb,0x08cc,0x08dd,0x08ee,0x08ff,
	0x0411,0x0611,0x0722,0x0733,0x0744,0x0855,0x0866,0x0877,
	0x0888,0x0899,0x08aa,0x08bb,0x08cc,0x08dd,0x08ee,0x08ff,
	0x0422,0x0522,0x0622,0x0633,0x0744,0x0755,0x0766,0x0777,
	0x0788,0x0799,0x08aa,0x08bb,0x08cc,0x08dd,0x08ee,0x08ff,
	0x0433,0x0433,0x0533,0x0633,0x0644,0x0755,0x0766,0x0777,
	0x0788,0x0799,0x07aa,0x07bb,0x07cc,0x07dd,0x07ee,0x08ff,
	0x0444,0x0444,0x0544,0x0544,0x0644,0x0655,0x0666,0x0777,
	0x0788,0x0799,0x07aa,0x07bb,0x07cc,0x07dd,0x07ee,0x07ff,
	0x0455,0x0455,0x0555,0x0555,0x0655,0x0655,0x0666,0x0677,
	0x0688,0x0799,0x07aa,0x07bb,0x07cc,0x07dd,0x07ee,0x07ff,
	0x0466,0x0466,0x0466,0x0566,0x0566,0x0666,0x0666,0x0677,
	0x0688,0x0699,0x07aa,0x07bb,0x07cc,0x07dd,0x07ee,0x07ff,
	0x0477,0x0477,0x0477,0x0577,0x0577,0x0577,0x0677,0x0677,
	0x0688,0x0699,0x06aa,0x06bb,0x07cc,0x07dd,0x07ee,0x07ff,
	0x0488,0x0488,0x0488,0x0488,0x0588,0x0588,0x0588,0x0688,
	0x0688,0x0699,0x06aa,0x06bb,0x06cc,0x06dd,0x07ee,0x07ff,
	0x0499,0x0499,0x0499,0x0499,0x0599,0x0599,0x0599,0x0599,
	0x0699,0x0699,0x06aa,0x06bb,0x06cc,0x06dd,0x06ee,0x07ff,
	0x04aa,0x04aa,0x04aa,0x04aa,0x05aa,0x05aa,0x05aa,0x05aa,
	0x06aa,0x06aa,0x06aa,0x06bb,0x06cc,0x06dd,0x06ee,0x06ff,
	0x04bb,0x04bb,0x04bb,0x04bb,0x04bb,0x05bb,0x05bb,0x05bb,
	0x05bb,0x06bb,0x06bb,0x06bb,0x06cc,0x06dd,0x06ee,0x06ff,
	0x04cc,0x04cc,0x04cc,0x04cc,0x04cc,0x05cc,0x05cc,0x05cc,
	0x05cc,0x05cc,0x06cc,0x06cc,0x06cc,0x06dd,0x06ee,0x06ff,
	0x04dd,0x04dd,0x04dd,0x04dd,0x04dd,0x04dd,0x05dd,0x05dd,
	0x05dd,0x05dd,0x05dd,0x06dd,0x06dd,0x06dd,0x06ee,0x06ff,
	0x04ee,0x04ee,0x04ee,0x04ee,0x04ee,0x04ee,0x05ee,0x05ee,
	0x05ee,0x05ee,0x05ee,0x05ee,0x06ee,0x06ee,0x06ee,0x06ff,
	0x04ff,0x04ff,0x04ff,0x04ff,0x04ff,0x04ff,0x05ff,0x05ff,
	0x05ff,0x05ff,0x05ff,0x05ff,0x06ff,0x06ff,0x06ff,0x06ff,
	0x0011,0x0a11,0x0922,0x0833,0x0844,0x0855,0x0866,0x0877,
	0x0888,0x0899,0x08aa,0x08bb,0x08cc,0x08dd,0x08ee,0x08ff,
	0x0211,0x0001,0x0812,0x0823,0x0834,0x0845,0x0856,0x0867,
	0x0878,0x0889,0x089a,0x08ab,0x08bc,0x08cd,0x08de,0x08ef,
	0x0322,0x0412,0x0612,0x0723,0x0734,0x0745,0x0856,0x0867,
	0x0878,0x0889,0x089a,0x08ab,0x08bc,0x08cd,0x08de,0x08ef,
	0x0333,0x0423,0x0523,0x0623,0x0634,0x0745,0x0756,0x0767,
	0x0778,0x0789,0x079a,0x08ab,0x08bc,0x08cd,0x08de,0x08ef,
	0x0344,0x0434,0x0434,0x0534,0x0634,0x0645,0x0756,0x0767,
	0x0778,0x0789,0x079a,0x07ab,0x07bc,0x07cd,0x07de,0x07ef,
	0x0455,0x0445,0x0445,0x0545,0x0545,0x0645,0x0656,0x0667,
	0x0778,0x0789,0x079a,0x07ab,0x07bc,0x07cd,0x07de,0x07ef,
	0x0466,0x0456,0x0456,0x0556,0x0556,0x0656,0x0656,0x0667,
	0x0678,0x0689,0x079a,0x07ab,0x07bc,0x07cd,0x07de,0x07ef,
	0x0477,0x0467,0x0467,0x0467,0x0567,0x0567,0x0667,0x0667,
	0x0678,0x0689,0x069a,0x07ab,0x07bc,0x07cd,0x07de,0x07ef,
	0x0488,0x0478,0x0478,0x0478,0x0578,0x0578,0x0578,0x0678,
	0x0678,0x0689,0x069a,0x06ab,0x06bc,0x07cd,0x07de,0x07ef,
	0x0499,0x0489,0x0489,0x0489,0x0489,0x0589,0x0589,0x0589,
	0x0689,0x0689,0x069a,0x06ab,0x06bc,0x06cd,0x06de,0x07ef,
	0x04aa,0x049a,0x049a,0x049a,0x049a,0x059a,0x059a,0x059a,
	0x059a,0x069a,0x069a,0x06ab,0x06bc,0x06cd,0x06de,0x06ef,
	0x04bb,0x04ab,0x04ab,0x04ab,0x04ab,0x05ab,0x05ab,0x05ab,
	0x05ab,0x06ab,0x06ab,0x06ab,0x06bc,0x06cd,0x06de,0x06ef,
	0x04cc,0x04bc,0x04bc,0x04bc,0x04bc,0x04bc,0x05bc,0x05bc,
	0x05bc,0x05bc,0x06bc,0x06bc,0x06bc,0x06cd,0x06de,0x06ef,
	0x04dd,0x04cd,0x04cd,0x04cd,0x04cd,0x04cd,0x05cd,0x05cd,
	0x05cd,0x05cd,0x05cd,0x06cd,0x06cd,0x06cd,0x06de,0x06ef,
	0x04ee,0x04de,0x04de,0x04de,0x04de,0x04de,0x04de,0x05de,
	0x05de,0x05de,0x05de,0x05de,0x06de,0x06de,0x06de,0x06ef,
	0x04ff,0x04ef,0x04ef,0x04ef,0x04ef,0x04ef,0x04ef,0x05ef,
	0x05ef,0x05ef,0x05ef,0x05ef,0x05ef,0x06ef,0x06ef,0x06ef,
	0x0022,0x0b22,0x0a22,0x0933,0x0944,0x0955,0x0866,0x0877,
	0x0888,0x0899,0x08aa,0x08bb,0x08cc,0x08dd,0x08ee,0x08ff,
	0x0122,0x0012,0x0a12,0x0923,0x0834,0x0845,0x0856,0x0867,
	0x0878,0x0889,0x089a,0x08ab,0x08bc,0x08cd,0x08de,0x08ef,
	0x0222,0x0212,0x0002,0x0813,0x0824,0x0835,0x0846,0x0857,
	0x0868,0x0879,0x088a,0x089b,0x08ac,0x08bd,0x08ce,0x08df,
	0x0233,0x0323,0x0413,0x0613,0x0724,0x0735,0x0746,0x0857,
	0x0868,0x0879,0x088a,0x089b,0x08ac,0x08bd,0x08ce,0x08df,
	0x0344,0x0334,0x0424,0x0524,0x0624,0x0635,0x0746,0x0757,
	0x0768,0x0779,0x078a,0x079b,0x08ac,0x08bd,0x08ce,0x08df,
	0x0355,0x0345,0x0435,0x0435,0x0535,0x0635,0x0646,0x0757,
	0x0768,0x0779,0x078a,0x079b,0x07ac,0x07bd,0x07ce,0x07df,
	0x0366,0x0456,0x0446,0x0446,0x0546,0x0546,0x0646,0x0657,
	0x0668,0x0779,0x078a,0x079b,0x07ac,0x07bd,0x07ce,0x07df,
	0x0377,0x0467,0x0457,0x0457,0x0557,0x0557,0x0657,0x0657,
	0x0668,0x0679,0x068a,0x079b,0x07ac,0x07bd,0x07ce,0x07df,
	0x0388,0x0478,0x0468,0x0468,0x0468,0x0568,0x0568,0x0668,
	0x0668,0x0679,0x068a,0x069b,0x07ac,0x07bd,0x07ce,0x07df,
	0x0399,0x0489,0x0479,0x0479,0x0479,0x0579,0x0579,0x0579,
	0x0679,0x0679,0x068a,0x069b,0x06ac,0x06bd,0x07ce,0x07df,
	0x04aa,0x049a,0x048a,0x048a,0x048a,0x048a,0x058a,0x058a,
	0x058a,0x068a,0x068a,0x069b,0x06ac,0x06bd,0x06ce,0x06df,
	0x04bb,0x04ab,0x049b,0x049b,0x049b,0x049b,0x059b,0x059b,
	0x059b,0x059b,0x069b,0x069b,0x06ac,0x06bd,0x06ce,0x06df,
	0x04cc,0x04bc,0x04ac,0x04ac,0x04ac,0x04ac,0x05ac,0x05ac,
	0x05ac,0x05ac,0x06ac,0x06ac,0x06ac,0x06bd,0x06ce,0x06df,
	0x04dd,0x04cd,0x04bd,0x04bd,0x04bd,0x04bd,0x04bd,0x05bd,
	0x05bd,0x05bd,0x05bd,0x06bd,0x06bd,0x06bd,0x06ce,0x06df,
	0x04ee,0x04de,0x04ce,0x04ce,0x04ce,0x04ce,0x04ce,0x05ce,
	0x05ce,0x05ce,0x05ce,0x05ce,0x06ce,0x06ce,0x06ce,0x06df,
	0x04ff,0x04ef,0x04df,0x04df,0x04df,0x04df,0x04df,0x04df,
	0x05df,0x05df,0x05df,0x05df,0x05df,0x06df,0x06df,0x06df,
	0x0033,0x0b33,0x0a33,0x0a33,0x0944,0x0955,0x0966,0x0977,
	0x0888,0x0899,0x08aa,0x08bb,0x08cc,0x08dd,0x08ee,0x08ff,
	0x0033,0x0023,0x0b23,0x0a23,0x0934,0x0945,0x0956,0x0867,
	0x0878,0x0889,0x089a,0x08ab,0x08bc,0x08cd,0x08de,0x08ef,
	0x0133,0x0123,0x0013,0x0a13,0x0924,0x0835,0x0846,0x0857,
	0x0868,0x0879,0x088a,0x089b,0x08ac,0x08bd,0x08ce,0x08df,
	0x0233,0x0223,0x0213,0x0003,0x0814,0x0825,0x0836,0x0847,
	0x0858,0x0869,0x087a,0x088b,0x089c,0x08ad,0x08be,0x08cf,
	0x0244,0x0234,0x0324,0x0414,0x0614,0x0725,0x0736,0x0747,
	0x0858,0x0869,0x087a,0x088b,0x089c,0x08ad,0x08be,0x08cf,
	0x0355,0x0345,0x0335,0x0425,0x0525,0x0625,0x0636,0x0747,
	0x0758,0x0769,0x077a,0x078b,0x079c,0x08ad,0x08be,0x08cf,
	0x0366,0x0356,0x0346,0x0436,0x0436,0x0536,0x0636,0x0647,
	0x0758,0x0769,0x077a,0x078b,0x079c,0x07ad,0x07be,0x07cf,
	0x0377,0x0367,0x0457,0x0447,0x0447,0x0547,0x0547,0x0647,
	0x0658,0x0669,0x077a,0x078b,0x079c,0x07ad,0x07be,0x07cf,
	0x0388,0x0378,0x0468,0x0458,0x0458,0x0558,0x0558,0x0658,
	0x0658,0x0669,0x067a,0x068b,0x079c,0x07ad,0x07be,0x07cf,
	0x0399,0x0389,0x0479,0x0469,0x0469,0x0469,0x0569,0x0569,
	0x0669,0x0669,0x067a,0x068b,0x069c,0x07ad,0x07be,0x07cf,
	0x03aa,0x039a,0x048a,0x047a,0x047a,0x047a,0x057a,0x057a,
	0x057a,0x067a,0x067a,0x068b,0x069c,0x06ad,0x06be,0x07cf,
	0x03bb,0x04ab,0x049b,0x048b,0x048b,0x048b,0x048b,0x058b,
	0x058b,0x058b,0x068b,0x068b,0x069c,0x06ad,0x06be,0x06cf,
	0x03cc,0x04bc,0x04ac,0x049c,0x049c,0x049c,0x049c,0x059c,
	0x059c,0x059c,0x059c,0x069c,0x069c,0x06ad,0x06be,0x06cf,
	0x03dd,0x04cd,0x04bd,0x04ad,0x04ad,0x04ad,0x04ad,0x05ad,
	0x05ad,0x05ad,0x05ad,0x06ad,0x06ad,0x06ad,0x06be,0x06cf,
	0x03ee,0x04de,0x04ce,0x04be,0x04be,0x04be,0x04be,0x04be,
	0x05be,0x05be,0x05be,0x05be,0x06be,0x06be,0x06be,0x06cf,
	0x04ff,0x04ef,0x04df,0x04cf,0x04cf,0x04cf,0x04cf,0x04cf,
	0x05cf,0x05cf,0x05cf,0x05cf,0x05cf,0x06cf,0x06cf,0x06cf,
	0x0044,0x0b44,0x0b44,0x0a44,0x0a44,0x0a55,0x0966,0x0977,
	0x0988,0x0999,0x09aa,0x08bb,0x08cc,0x08dd,0x08ee,0x08ff,
	0x0044,0x0034,0x0b34,0x0a34,0x0a34,0x0945,0x0956,0x0967,
	0x0978,0x0889,0x089a,0x08ab,0x08bc,0x08cd,0x08de,0x08ef,
	0x0144,0x0034,0x0024,0x0b24,0x0a24,0x0935,0x0946,0x0957,
	0x0868,0x0879,0x088a,0x089b,0x08ac,0x08bd,0x08ce,0x08df,
	0x0144,0x0134,0x0124,0x0014,0x0a14,0x0925,0x0836,0x0847,
	0x0858,0x0869,0x087a,0x088b,0x089c,0x08ad,0x08be,0x08cf,
	0x0244,0x0234,0x0224,0x0214,0x0004,0x0815,0x0826,0x0837,
	0x0848,0x0859,0x086a,0x087b,0x088c,0x089d,0x08ae,0x08bf,
	0x0255,0x0245,0x0235,0x0325,0x0415,0x0615,0x0726,0x0737,
	0x0748,0x0859,0x086a,0x087b,0x088c,0x089d,0x08ae,0x08bf,
	0x0266,0x0356,0x0346,0x0336,0x0426,0x0526,0x0626,0x0637,
	0x0748,0x0759,0x076a,0x077b,0x078c,0x079d,0x08ae,0x08bf,
	0x0377,0x0367,0x0357,0x0347,0x0437,0x0437,0x0537,0x0637,
	0x0648,0x0759,0x076a,0x077b,0x078c,0x079d,0x07ae,0x07bf,
	0x0388,0x0378,0x0368,0x0458,0x0448,0x0448,0x0548,0x0548,
	0x0648,0x0659,0x066a,0x077b,0x078c,0x079d,0x07ae,0x07bf,
	0x0399,0x0389,0x0379,0x0469,0x0459,0x0459,0x0559,0x0559,
	0x0659,0x0659,0x066a,0x067b,0x068c,0x079d,0x07ae,0x07bf,
	0x03aa,0x039a,0x038a,0x047a,0x046a,0x046a,0x046a,0x056a,
	0x056a,0x066a,0x066a,0x067b,0x068c,0x069d,0x07ae,0x07bf,
	0x03bb,0x03ab,0x039b,0x048b,0x047b,0x047b,0x047b,0x057b,
	0x057b,0x057b,0x067b,0x067b,0x068c,0x069d,0x06ae,0x06bf,
	0x03cc,0x03bc,0x04ac,0x049c,0x048c,0x048c,0x048c,0x048c,
	0x058c,0x058c,0x058c,0x068c,0x068c,0x069d,0x06ae,0x06bf,
	0x03dd,0x03cd,0x04bd,0x04ad,0x049d,0x049d,0x049d,0x049d,
	0x059d,0x059d,0x059d,0x059d,0x069d,0x069d,0x06ae,0x06bf,
	0x03ee,0x03de,0x04ce,0x04be,0x04ae,0x04ae,0x04ae,0x04ae,
	0x05ae,0x05ae,0x05ae,0x05ae,0x06ae,0x06ae,0x06ae,0x06bf,
	0x03ff,0x03ef,0x04df,0x04cf,0x04bf,0x04bf,0x04bf,0x04bf,
	0x04bf,0x05bf,0x05bf,0x05bf,0x05bf,0x06bf,0x06bf,0x06bf,
	0x0055,0x0055,0x0b55,0x0b55,0x0a55,0x0a55,0x0a66,0x0977,
	0x0988,0x0999,0x09aa,0x09bb,0x09cc,0x08dd,0x08ee,0x08ff,
	0x0055,0x0045,0x0b45,0x0b45,0x0a45,0x0a45,0x0a56,0x0967,
	0x0978,0x0989,0x099a,0x09ab,0x08bc,0x08cd,0x08de,0x08ef,
	0x0155,0x0045,0x0035,0x0b35,0x0a35,0x0a35,0x0946,0x0957,
	0x0968,0x0979,0x088a,0x089b,0x08ac,0x08bd,0x08ce,0x08df,
	0x0155,0x0145,0x0035,0x0025,0x0b25,0x0a25,0x0936,0x0947,
	0x0958,0x0869,0x087a,0x088b,0x089c,0x08ad,0x08be,0x08cf,
	0x0255,0x0145,0x0135,0x0125,0x0015,0x0a15,0x0926,0x0837,
	0x0848,0x0859,0x086a,0x087b,0x088c,0x089d,0x08ae,0x08bf,
	0x0255,0x0245,0x0235,0x0225,0x0215,0x0005,0x0816,0x0827,
	0x0838,0x0849,0x085a,0x086b,0x087c,0x088d,0x089e,0x08af,
	0x0266,0x0256,0x0246,0x0236,0x0326,0x0416,0x0616,0x0727,
	0x0738,0x0749,0x085a,0x086b,0x087c,0x088d,0x089e,0x08af,
	0x0277,0x0267,0x0357,0x0347,0x0337,0x0427,0x0527,0x0627,
	0x0638,0x0749,0x075a,0x076b,0x077c,0x078d,0x079e,0x08af,
	0x0288,0x0378,0x0368,0x0358,0x0348,0x0438,0x0438,0x0538,
	0x0638,0x0649,0x075a,0x076b,0x077c,0x078d,0x079e,0x07af,
	0x0399,0x0389,0x0379,0x0369,0x0459,0x0449,0x0449,0x0549,
	0x0549,0x0649,0x065a,0x066b,0x077c,0x078d,0x079e,0x07af,
	0x03aa,0x039a,0x038a,0x037a,0x046a,0x045a,0x045a,0x055a,
	0x055a,0x065a,0x065a,0x066b,0x067c,0x068d,0x079e,0x07af,
	0x03bb,0x03ab,0x039b,0x038b,0x047b,0x046b,0x046b,0x046b,
	0x056b,0x056b,0x066b,0x066b,0x067c,0x068d,0x069e,0x07af,
	0x03cc,0x03bc,0x03ac,0x039c,0x048c,0x047c,0x047c,0x047c,
	0x057c,0x057c,0x057c,0x067c,0x067c,0x068d,0x069e,0x06af,
	0x03dd,0x03cd,0x03bd,0x04ad,0x049d,0x048d,0x048d,0x048d,
	0x048d,0x058d,0x058d,0x058d,0x068d,0x068d,0x069e,0x06af,
	0x03ee,0x03de,0x03ce,0x04be,0x04ae,0x049e,0x049e,0x049e,
	0x049e,0x059e,0x059e,0x059e,0x059e,0x069e,0x069e,0x06af,
	0x03ff,0x03ef,0x03df,0x04cf,0x04bf,0x04af,0x04af,0x04af,
	0x04af,0x05af,0x05af,0x05af,0x05af,0x06af,0x06af,0x06af,
	0x0066,0x0066,0x0b66,0x0b66,0x0a66,0x0a66,0x0a66,0x0a77,
	0x0988,0x0999,0x09aa,0x09bb,0x09cc,0x09dd,0x09ee,0x09ff,
	0x0066,0x0056,0x0056,0x0b56,0x0b56,0x0a56,0x0a56,0x0a67,
	0x0978,0x0989,0x099a,0x09ab,0x09bc,0x09cd,0x08de,0x08ef,
	0x0066,0x0056,0x0046,0x0b46,0x0b46,0x0a46,0x0a46,0x0a57,
	0x0968,0x0979,0x098a,0x099b,0x09ac,0x08bd,0x08ce,0x08df,
	0x0166,0x0156,0x0046,0x0036,0x0b36,0x0a36,0x0a36,0x0947,
	0x0958,0x0969,0x097a,0x088b,0x089c,0x08ad,0x08be,0x08cf,
	0x0166,0x0156,0x0146,0x0036,0x0026,0x0b26,0x0a26,0x0937,
	0x0948,0x0959,0x086a,0x087b,0x088c,0x089d,0x08ae,0x08bf,
	0x0266,0x0256,0x0146,0x0136,0x0126,0x0016,0x0a16,0x0927,
	0x0838,0x0849,0x085a,0x086b,0x087c,0x088d,0x089e,0x08af,
	0x0266,0x0256,0x0246,0x0236,0x0226,0x0216,0x0006,0x0817,
	0x0828,0x0839,0x084a,0x085b,0x086c,0x087d,0x088e,0x089f,
	0x0277,0x0267,0x0257,0x0247,0x0237,0x0327,0x0417,0x0617,
	0x0728,0x0739,0x074a,0x085b,0x086c,0x087d,0x088e,0x089f,
	0x0288,0x0278,0x0268,0x0358,0x0348,0x0338,0x0428,0x0528,
	0x0628,0x0639,0x074a,0x075b,0x076c,0x077d,0x078e,0x079f,
	0x0299,0x0289,0x0379,0x0369,0x0359,0x0349,0x0439,0x0439,
	0x0539,0x0639,0x064a,0x075b,0x076c,0x077d,0x078e,0x079f,
	0x03aa,0x039a,0x038a,0x037a,0x036a,0x045a,0x044a,0x044a,
	0x054a,0x054a,0x064a,0x065b,0x066c,0x077d,0x078e,0x079f,
	0x03bb,0x03ab,0x039b,0x038b,0x037b,0x046b,0x045b,0x045b,
	0x055b,0x055b,0x065b,0x065b,0x066c,0x067d,0x068e,0x079f,
	0x03cc,0x03bc,0x03ac,0x039c,0x038c,0x047c,0x046c,0x046c,
	0x046c,0x056c,0x056c,0x066c,0x066c,0x067d,0x068e,0x069f,
	0x03dd,0x03cd,0x03bd,0x03ad,0x039d,0x048d,0x047d,0x047d,
	0x047d,0x057d,0x057d,0x057d,0x067d,0x067d,0x068e,0x069f,
	0x03ee,0x03de,0x03ce,0x03be,0x04ae,0x049e,0x048e,0x048e,
	0x048e,0x048e,0x058e,0x058e,0x058e,0x068e,0x068e,0x069f,
	0x03ff,0x03ef,0x03df,0x03cf,0x04bf,0x04af,0x049f,0x049f,
	0x049f,0x049f,0x059f,0x059f,0x059f,0x059f,0x069f,0x069f,
	0x0077,0x0077,0x0b77,0x0b77,0x0b77,0x0a77,0x0a77,0x0a77,
	0x0a88,0x0999,0x09aa,0x09bb,0x09cc,0x09dd,0x09ee,0x09ff,
	0x0077,0x0067,0x0067,0x0b67,0x0b67,0x0a67,0x0a67,0x0a67,
	0x0a78,0x0989,0x099a,0x09ab,0x09bc,0x09cd,0x09de,0x09ef,
	0x0077,0x0067,0x0057,0x0057,0x0b57,0x0b57,0x0a57,0x0a57,
	0x0a68,0x0979,0x098a,0x099b,0x09ac,0x09bd,0x09ce,0x08df,
	0x0177,0x0067,0x0057,0x0047,0x0b47,0x0b47,0x0a47,0x0a47,
	0x0a58,0x0969,0x097a,0x098b,0x099c,0x09ad,0x08be,0x08cf,
	0x0177,0x0167,0x0157,0x0047,0x0037,0x0b37,0x0a37,0x0a37,
	0x0948,0x0959,0x096a,0x097b,0x088c,0x089d,0x08ae,0x08bf,
	0x0177,0x0167,0x0157,0x0147,0x0037,0x0027,0x0b27,0x0a27,
	0x0938,0x0949,0x095a,0x086b,0x087c,0x088d,0x089e,0x08af,
	0x0277,0x0267,0x0257,0x0147,0x0137,0x0127,0x0017,0x0a17,
	0x0928,0x0839,0x084a,0x085b,0x086c,0x087d,0x088e,0x089f,
	0x0277,0x0267,0x0257,0x0247,0x0237,0x0227,0x0217,0x0007,
	0x0818,0x0829,0x083a,0x084b,0x085c,0x086d,0x087e,0x088f,
	0x0288,0x0278,0x0268,0x0258,0x0248,0x0238,0x0328,0x0418,
	0x0618,0x0729,0x073a,0x074b,0x085c,0x086d,0x087e,0x088f,
	0x0299,0x0289,0x0279,0x0269,0x0359,0x0349,0x0339,0x0429,
	0x0529,0x0629,0x063a,0x074b,0x075c,0x076d,0x077e,0x078f,
	0x02aa,0x029a,0x028a,0x037a,0x036a,0x035a,0x034a,0x043a,
	0x043a,0x053a,0x063a,0x064b,0x075c,0x076d,0x077e,0x078f,
	0x02bb,0x03ab,0x039b,0x038b,0x037b,0x036b,0x045b,0x044b,
	0x044b,0x054b,0x054b,0x064b,0x065c,0x066d,0x077e,0x078f,
	0x03cc,0x03bc,0x03ac,0x039c,0x038c,0x037c,0x046c,0x045c,
	0x045c,0x055c,0x055c,0x065c,0x065c,0x066d,0x067e,0x068f,
	0x03dd,0x03cd,0x03bd,0x03ad,0x039d,0x038d,0x047d,0x046d,
	0x046d,0x046d,0x056d,0x056d,0x066d,0x066d,0x067e,0x068f,
	0x03ee,0x03de,0x03ce,0x03be,0x03ae,0x039e,0x048e,0x047e,
	0x047e,0x047e,0x057e,0x057e,0x057e,0x067e,0x067e,0x068f,
	0x03ff,0x03ef,0x03df,0x03cf,0x03bf,0x04af,0x049f,0x048f,
	0x048f,0x048f,0x048f,0x058f,0x058f,0x058f,0x068f,0x068f,
	0x0088,0x0088,0x0b88,0x0b88,0x0b88,0x0a88,0x0a88,0x0a88,
	0x0a88,0x0a99,0x0aaa,0x09bb,0x09cc,0x09dd,0x09ee,0x09ff,
	0x0088,0x0078,0x0078,0x0b78,0x0b78,0x0b78,0x0a78,0x0a78,
	0x0a78,0x0a89,0x099a,0x09ab,0x09bc,0x09cd,0x09de,0x09ef,
	0x0088,0x0078,0x0068,0x0068,0x0b68,0x0b68,0x0a68,0x0a68,
	0x0a68,0x0a79,0x098a,0x099b,0x09ac,0x09bd,0x09ce,0x09df,
	0x0088,0x0078,0x0068,0x0058,0x0058,0x0b58,0x0b58,0x0a58,
	0x0a58,0x0a69,0x097a,0x098b,0x099c,0x09ad,0x09be,0x09cf,
	0x0188,0x0178,0x0068,0x0058,0x0048,0x0b48,0x0b48,0x0a48,
	0x0a48,0x0a59,0x096a,0x097b,0x098c,0x099d,0x09ae,0x08bf,
	0x0188,0x0178,0x0168,0x0158,0x0048,0x0038,0x0b38,0x0a38,
	0x0a38,0x0949,0x095a,0x096b,0x097c,0x088d,0x089e,0x08af,
	0x0188,0x0178,0x0168,0x0158,0x0148,0x0038,0x0028,0x0b28,
	0x0a28,0x0939,0x094a,0x095b,0x086c,0x087d,0x088e,0x089f,
	0x0288,0x0278,0x0268,0x0258,0x0148,0x0138,0x0128,0x0018,
	0x0a18,0x0929,0x083a,0x084b,0x085c,0x086d,0x087e,0x088f,
	0x0288,0x0278,0x0268,0x0258,0x0248,0x0238,0x0228,0x0218,
	0x0008,0x0819,0x082a,0x083b,0x084c,0x085d,0x086e,0x087f,
	0x0299,0x0289,0x0279,0x0269,0x0259,0x0249,0x0239,0x0329,
	0x0419,0x0619,0x072a,0x073b,0x074c,0x085d,0x086e,0x087f,
	0x02aa,0x029a,0x028a,0x027a,0x026a,0x035a,0x034a,0x033a,
	0x042a,0x052a,0x062a,0x063b,0x074c,0x075d,0x076e,0x077f,
	0x02bb,0x02ab,0x029b,0x028b,0x037b,0x036b,0x035b,0x034b,
	0x043b,0x043b,0x053b,0x063b,0x064c,0x075d,0x076e,0x077f,
	0x02cc,0x02bc,0x03ac,0x039c,0x038c,0x037c,0x036c,0x045c,
	0x044c,0x044c,0x054c,0x054c,0x064c,0x065d,0x066e,0x077f,
	0x02dd,0x03cd,0x03bd,0x03ad,0x039d,0x038d,0x037d,0x046d,
	0x045d,0x045d,0x055d,0x055d,0x065d,0x065d,0x066e,0x067f,
	0x03ee,0x03de,0x03ce,0x03be,0x03ae,0x039e,0x038e,0x047e,
	0x046e,0x046e,0x046e,0x056e,0x056e,0x066e,0x066e,0x067f,
	0x03ff,0x03ef,0x03df,0x03cf,0x03bf,0x03af,0x039f,0x048f,
	0x047f,0x047f,0x047f,0x057f,0x057f,0x057f,0x067f,0x067f,
	0x0099,0x0099,0x0b99,0x0b99,0x0b99,0x0b99,0x0a99,0x0a99,
	0x0a99,0x0a99,0x0aaa,0x0abb,0x09cc,0x09dd,0x09ee,0x09ff,
	0x0099,0x0089,0x0089,0x0b89,0x0b89,0x0b89,0x0a89,0x0a89,
	0x0a89,0x0a89,0x0a9a,0x0aab,0x09bc,0x09cd,0x09de,0x09ef,
	0x0099,0x0089,0x0079,0x0079,0x0b79,0x0b79,0x0b79,0x0a79,
	0x0a79,0x0a79,0x0a8a,0x099b,0x09ac,0x09bd,0x09ce,0x09df,
	0x0099,0x0089,0x0079,0x0069,0x0069,0x0b69,0x0b69,0x0a69,
	0x0a69,0x0a69,0x0a7a,0x098b,0x099c,0x09ad,0x09be,0x09cf,
	0x0199,0x0089,0x0079,0x0069,0x0059,0x0059,0x0b59,0x0b59,
	0x0a59,0x0a59,0x0a6a,0x097b,0x098c,0x099d,0x09ae,0x09bf,
	0x0199,0x0189,0x0179,0x0069,0x0059,0x0049,0x0b49,0x0b49,
	0x0a49,0x0a49,0x0a5a,0x096b,0x097c,0x098d,0x099e,0x09af,
	0x0199,0x0189,0x0179,0x0169,0x0159,0x0049,0x0039,0x0b39,
	0x0a39,0x0a39,0x094a,0x095b,0x096c,0x097d,0x088e,0x089f,
	0x0199,0x0189,0x0179,0x0169,0x0159,0x0149,0x0039,0x0029,
	0x0b29,0x0a29,0x093a,0x094b,0x095c,0x086d,0x087e,0x088f,
	0x0299,0x0289,0x0279,0x0269,0x0259,0x0149,0x0139,0x0129,
	0x0019,0x0a19,0x092a,0x083b,0x084c,0x085d,0x086e,0x087f,
	0x0299,0x0289,0x0279,0x0269,0x0259,0x0249,0x0239,0x0229,
	0x0219,0x0009,0x081a,0x082b,0x083c,0x084d,0x085e,0x086f,
	0x02aa,0x029a,0x028a,0x027a,0x026a,0x025a,0x024a,0x023a,
	0x032a,0x041a,0x061a,0x072b,0x073c,0x074d,0x085e,0x086f,
	0x02bb,0x02ab,0x029b,0x028b,0x027b,0x026b,0x035b,0x034b,
	0x033b,0x042b,0x052b,0x062b,0x063c,0x074d,0x075e,0x076f,
	0x02cc,0x02bc,0x02ac,0x029c,0x028c,0x037c,0x036c,0x035c,
	0x034c,0x043c,0x043c,0x053c,0x063c,0x064d,0x075e,0x076f,
	0x02dd,0x02cd,0x02bd,0x03ad,0x039d,0x038d,0x037d,0x036d,
	0x045d,0x044d,0x044d,0x054d,0x054d,0x064d,0x065e,0x066f,
	0x02ee,0x02de,0x03ce,0x03be,0x03ae,0x039e,0x038e,0x037e,
	0x046e,0x045e,0x045e,0x055e,0x055e,0x065e,0x065e,0x066f,
	0x03ff,0x03ef,0x03df,0x03cf,0x03bf,0x03af,0x039f,0x038f,
	0x047f,0x046f,0x046f,0x046f,0x056f,0x056f,0x066f,0x066f,
	0x00aa,0x00aa,0x00aa,0x0baa,0x0baa,0x0baa,0x0baa,0x0aaa,
	0x0aaa,0x0aaa,0x0aaa,0x0abb,0x0acc,0x09dd,0x09ee,0x09ff,
	0x00aa,0x009a,0x009a,0x0b9a,0x0b9a,0x0b9a,0x0b9a,0x0a9a,
	0x0a9a,0x0a9a,0x0a9a,0x0aab,0x0abc,0x09cd,0x09de,0x09ef,
	0x00aa,0x009a,0x008a,0x008a,0x0b8a,0x0b8a,0x0b8a,0x0a8a,
	0x0a8a,0x0a8a,0x0a8a,0x0a9b,0x0aac,0x09bd,0x09ce,0x09df,
	0x00aa,0x009a,0x008a,0x007a,0x007a,0x0b7a,0x0b7a,0x0b7a,
	0x0a7a,0x0a7a,0x0a7a,0x0a8b,0x099c,0x09ad,0x09be,0x09cf,
	0x01aa,0x009a,0x008a,0x007a,0x006a,0x006a,0x0b6a,0x0b6a,
	0x0a6a,0x0a6a,0x0a6a,0x0a7b,0x098c,0x099d,0x09ae,0x09bf,
	0x01aa,0x019a,0x008a,0x007a,0x006a,0x005a,0x005a,0x0b5a,
	0x0b5a,0x0a5a,0x0a5a,0x0a6b,0x097c,0x098d,0x099e,0x09af,
	0x01aa,0x019a,0x018a,0x017a,0x006a,0x005a,0x004a,0x0b4a,
	0x0b4a,0x0a4a,0x0a4a,0x0a5b,0x096c,0x097d,0x098e,0x099f,
	0x01aa,0x019a,0x018a,0x017a,0x016a,0x015a,0x004a,0x003a,
	0x0b3a,0x0a3a,0x0a3a,0x094b,0x095c,0x096d,0x097e,0x088f,
	0x02aa,0x019a,0x018a,0x017a,0x016a,0x015a,0x014a,0x003a,
	0x002a,0x0b2a,0x0a2a,0x093b,0x094c,0x095d,0x086e,0x087f,
	0x02aa,0x029a,0x028a,0x027a,0x026a,0x025a,0x014a,0x013a,
	0x012a,0x001a,0x0a1a,0x092b,0x083c,0x084d,0x085e,0x086f,
	0x02aa,0x029a,0x028a,0x027a,0x026a,0x025a,0x024a,0x023a,
	0x022a,0x021a,0x000a,0x081b,0x082c,0x083d,0x084e,0x085f,
	0x02bb,0x02ab,0x029b,0x028b,0x027b,0x026b,0x025b,0x024b,
	0x023b,0x032b,0x041b,0x061b,0x072c,0x073d,0x074e,0x085f,
	0x02cc,0x02bc,0x02ac,0x029c,0x028c,0x027c,0x026c,0x035c,
	0x034c,0x033c,0x042c,0x052c,0x062c,0x063d,0x074e,0x075f,
	0x02dd,0x02cd,0x02bd,0x02ad,0x029d,0x028d,0x037d,0x036d,
	0x035d,0x034d,0x043d,0x043d,0x053d,0x063d,0x064e,0x075f,
	0x02ee,0x02de,0x02ce,0x02be,0x03ae,0x039e,0x038e,0x037e,
	0x036e,0x045e,0x044e,0x044e,0x054e,0x054e,0x064e,0x065f,
	0x02ff,0x02ef,0x02df,0x03cf,0x03bf,0x03af,0x039f,0x038f,
	0x037f,0x046f,0x045f,0x045f,0x055f,0x055f,0x065f,0x065f,
	0x00bb,0x00bb,0x00bb,0x0bbb,0x0bbb,0x0bbb,0x0bbb,0x0abb,
	0x0abb,0x0abb,0x0abb,0x0abb,0x0acc,0x0add,0x09ee,0x09ff,
	0x00bb,0x00ab,0x00ab,0x00ab,0x0bab,0x0bab,0x0bab,0x0bab,
	0x0aab,0x0aab,0x0aab,0x0aab,0x0abc,0x0acd,0x09de,0x09ef,
	0x00bb,0x00ab,0x009b,0x009b,0x0b9b,0x0b9b,0x0b9b,0x0b9b,
	0x0a9b,0x0a9b,0x0a9b,0x0a9b,0x0aac,0x0abd,0x09ce,0x09df,
	0x00bb,0x00ab,0x009b,0x008b,0x008b,0x0b8b,0x0b8b,0x0b8b,
	0x0a8b,0x0a8b,0x0a8b,0x0a8b,0x0a9c,0x0aad,0x09be,0x09cf,
	0x00bb,0x00ab,0x009b,0x008b,0x007b,0x007b,0x0b7b,0x0b7b,
	0x0b7b,0x0a7b,0x0a7b,0x0a7b,0x0a8c,0x099d,0x09ae,0x09bf,
	0x01bb,0x01ab,0x009b,0x008b,0x007b,0x006b,0x006b,0x0b6b,
	0x0b6b,0x0a6b,0x0a6b,0x0a6b,0x0a7c,0x098d,0x099e,0x09af,
	0x01bb,0x01ab,0x019b,0x008b,0x007b,0x006b,0x005b,0x005b,
	0x0b5b,0x0b5b,0x0a5b,0x0a5b,0x0a6c,0x097d,0x098e,0x099f,
	0x01bb,0x01ab,0x019b,0x018b,0x017b,0x006b,0x005b,0x004b,
	0x0b4b,0x0b4b,0x0a4b,0x0a4b,0x0a5c,0x096d,0x097e,0x098f,
	0x01bb,0x01ab,0x019b,0x018b,0x017b,0x016b,0x015b,0x004b,
	0x003b,0x0b3b,0x0a3b,0x0a3b,0x094c,0x095d,0x096e,0x097f,
	0x02bb,0x02ab,0x019b,0x018b,0x017b,0x016b,0x015b,0x014b,
	0x003b,0x002b,0x0b2b,0x0a2b,0x093c,0x094d,0x095e,0x086f,
	0x02bb,0x02ab,0x029b,0x028b,0x027b,0x026b,0x025b,0x014b,
	0x013b,0x012b,0x001b,0x0a1b,0x092c,0x083d,0x084e,0x085f,
	0x02bb,0x02ab,0x029b,0x028b,0x027b,0x026b,0x025b,0x024b,
	0x023b,0x022b,0x021b,0x000b,0x081c,0x082d,0x083e,0x084f,
	0x02cc,0x02bc,0x02ac,0x029c,0x028c,0x027c,0x026c,0x025c,
	0x024c,0x023c,0x032c,0x041c,0x061c,0x072d,0x073e,0x074f,
	0x02dd,0x02cd,0x02bd,0x02ad,0x029d,0x028d,0x027d,0x026d,
	0x035d,0x034d,0x033d,0x042d,0x052d,0x062d,0x063e,0x074f,
	0x02ee,0x02de,0x02ce,0x02be,0x02ae,0x029e,0x028e,0x037e,
	0x036e,0x035e,0x034e,0x043e,0x043e,0x053e,0x063e,0x064f,
	0x02ff,0x02ef,0x02df,0x02cf,0x02bf,0x03af,0x039f,0x038f,
	0x037f,0x036f,0x045f,0x044f,0x044f,0x054f,0x054f,0x064f,
	0x00cc,0x00cc,0x00cc,0x0bcc,0x0bcc,0x0bcc,0x0bcc,0x0bcc,
	0x0acc,0x0acc,0x0acc,0x0acc,0x0acc,0x0add,0x0aee,0x0aff,
	0x00cc,0x00bc,0x00bc,0x00bc,0x0bbc,0x0bbc,0x0bbc,0x0bbc,
	0x0abc,0x0abc,0x0abc,0x0abc,0x0abc,0x0acd,0x0ade,0x09ef,
	0x00cc,0x00bc,0x00ac,0x00ac,0x00ac,0x0bac,0x0bac,0x0bac,
	0x0bac,0x0aac,0x0aac,0x0aac,0x0aac,0x0abd,0x0ace,0x09df,
	0x00cc,0x00bc,0x00ac,0x009c,0x009c,0x0b9c,0x0b9c,0x0b9c,
	0x0b9c,0x0a9c,0x0a9c,0x0a9c,0x0a9c,0x0aad,0x0abe,0x09cf,
	0x00cc,0x00bc,0x00ac,0x009c,0x008c,0x008c,0x0b8c,0x0b8c,
	0x0b8c,0x0a8c,0x0a8c,0x0a8c,0x0a8c,0x0a9d,0x0aae,0x09bf,
	0x01cc,0x00bc,0x00ac,0x009c,0x008c,0x007c,0x007c,0x0b7c,
	0x0b7c,0x0b7c,0x0a7c,0x0a7c,0x0a7c,0x0a8d,0x099e,0x09af,
	0x01cc,0x01bc,0x01ac,0x009c,0x008c,0x007c,0x006c,0x006c,
	0x0b6c,0x0b6c,0x0a6c,0x0a6c,0x0a6c,0x0a7d,0x098e,0x099f,
	0x01cc,0x01bc,0x01ac,0x019c,0x008c,0x007c,0x006c,0x005c,
	0x005c,0x0b5c,0x0b5c,0x0a5c,0x0a5c,0x0a6d,0x097e,0x098f,
	0x01cc,0x01bc,0x01ac,0x019c,0x018c,0x017c,0x006c,0x005c,
	0x004c,0x0b4c,0x0b4c,0x0a4c,0x0a4c,0x0a5d,0x096e,0x097f,
	0x01cc,0x01bc,0x01ac,0x019c,0x018c,0x017c,0x016c,0x015c,
	0x004c,0x003c,0x0b3c,0x0a3c,0x0a3c,0x094d,0x095e,0x096f,
	0x02cc,0x02bc,0x02ac,0x019c,0x018c,0x017c,0x016c,0x015c,
	0x014c,0x003c,0x002c,0x0b2c,0x0a2c,0x093d,0x094e,0x095f,
	0x02cc,0x02bc,0x02ac,0x029c,0x028c,0x027c,0x026c,0x025c,
	0x014c,0x013c,0x012c,0x001c,0x0a1c,0x092d,0x083e,0x084f,
	0x02cc,0x02bc,0x02ac,0x029c,0x028c,0x027c,0x026c,0x025c,
	0x024c,0x023c,0x022c,0x021c,0x000c,0x081d,0x082e,0x083f,
	0x02dd,0x02cd,0x02bd,0x02ad,0x029d,0x028d,0x027d,0x026d,
	0x025d,0x024d,0x023d,0x032d,0x041d,0x061d,0x072e,0x073f,
	0x02ee,0x02de,0x02ce,0x02be,0x02ae,0x029e,0x028e,0x027e,
	0x026e,0x035e,0x034e,0x033e,0x042e,0x052e,0x062e,0x063f,
	0x02ff,0x02ef,0x02df,0x02cf,0x02bf,0x02af,0x029f,0x028f,
	0x037f,0x036f,0x035f,0x034f,0x043f,0x043f,0x053f,0x063f,
	0x00dd,0x00dd,0x00dd,0x0bdd,0x0bdd,0x0bdd,0x0bdd,0x0bdd,
	0x0add,0x0add,0x0add,0x0add,0x0add,0x0add,0x0aee,0x0aff,
	0x00dd,0x00cd,0x00cd,0x00cd,0x0bcd,0x0bcd,0x0bcd,0x0bcd,
	0x0bcd,0x0acd,0x0acd,0x0acd,0x0acd,0x0acd,0x0ade,0x0aef,
	0x00dd,0x00cd,0x00bd,0x00bd,0x00bd,0x0bbd,0x0bbd,0x0bbd,
	0x0bbd,0x0abd,0x0abd,0x0abd,0x0abd,0x0abd,0x0ace,0x0adf,
	0x00dd,0x00cd,0x00bd,0x00ad,0x00ad,0x00ad,0x0bad,0x0bad,
	0x0bad,0x0bad,0x0aad,0x0aad,0x0aad,0x0aad,0x0abe,0x0acf,
	0x00dd,0x00cd,0x00bd,0x00ad,0x009d,0x009d,0x0b9d,0x0b9d,
	0x0b9d,0x0b9d,0x0a9d,0x0a9d,0x0a9d,0x0a9d,0x0aae,0x0abf,
	0x00dd,0x00cd,0x00bd,0x00ad,0x009d,0x008d,0x008d,0x0b8d,
	0x0b8d,0x0b8d,0x0a8d,0x0a8d,0x0a8d,0x0a8d,0x0a9e,0x0aaf,
	0x01dd,0x01cd,0x00bd,0x00ad,0x009d,0x008d,0x007d,0x007d,
	0x0b7d,0x0b7d,0x0b7d,0x0a7d,0x0a7d,0x0a7d,0x0a8e,0x099f,
	0x01dd,0x01cd,0x01bd,0x01ad,0x009d,0x008d,0x007d,0x006d,
	0x006d,0x0b6d,0x0b6d,0x0a6d,0x0a6d,0x0a6d,0x0a7e,0x098f,
	0x01dd,0x01cd,0x01bd,0x01ad,0x019d,0x008d,0x007d,0x006d,
	0x005d,0x005d,0x0b5d,0x0b5d,0x0a5d,0x0a5d,0x0a6e,0x097f,
	0x01dd,0x01cd,0x01bd,0x01ad,0x019d,0x018d,0x017d,0x006d,
	0x005d,0x004d,0x0b4d,0x0b4d,0x0a4d,0x0a4d,0x0a5e,0x096f,
	0x01dd,0x01cd,0x01bd,0x01ad,0x019d,0x018d,0x017d,0x016d,
	0x015d,0x004d,0x003d,0x0b3d,0x0a3d,0x0a3d,0x094e,0x095f,
	0x02dd,0x02cd,0x02bd,0x02ad,0x019d,0x018d,0x017d,0x016d,
	0x015d,0x014d,0x003d,0x002d,0x0b2d,0x0a2d,0x093e,0x094f,
	0x02dd,0x02cd,0x02bd,0x02ad,0x029d,0x028d,0x027d,0x026d,
	0x025d,0x014d,0x013d,0x012d,0x001d,0x0a1d,0x092e,0x083f,
	0x02dd,0x02cd,0x02bd,0x02ad,0x029d,0x028d,0x027d,0x026d,
	0x025d,0x024d,0x023d,0x022d,0x021d,0x000d,0x081e,0x082f,
	0x02ee,0x02de,0x02ce,0x02be,0x02ae,0x029e,0x028e,0x027e,
	0x026e,0x025e,0x024e,0x023e,0x032e,0x041e,0x061e,0x072f,
	0x02ff,0x02ef,0x02df,0x02cf,0x02bf,0x02af,0x029f,0x028f,
	0x027f,0x026f,0x035f,0x034f,0x033f,0x042f,0x052f,0x062f,
	0x00ee,0x00ee,0x00ee,0x0bee,0x0bee,0x0bee,0x0bee,0x0bee,
	0x0bee,0x0aee,0x0aee,0x0aee,0x0aee,0x0aee,0x0aee,0x0aff,
	0x00ee,0x00de,0x00de,0x00de,0x0bde,0x0bde,0x0bde,0x0bde,
	0x0bde,0x0ade,0x0ade,0x0ade,0x0ade,0x0ade,0x0ade,0x0aef,
	0x00ee,0x00de,0x00ce,0x00ce,0x00ce,0x0bce,0x0bce,0x0bce,
	0x0bce,0x0bce,0x0ace,0x0ace,0x0ace,0x0ace,0x0ace,0x0adf,
	0x00ee,0x00de,0x00ce,0x00be,0x00be,0x00be,0x0bbe,0x0bbe,
	0x0bbe,0x0bbe,0x0abe,0x0abe,0x0abe,0x0abe,0x0abe,0x0acf,
	0x00ee,0x00de,0x00ce,0x00be,0x00ae,0x00ae,0x00ae,0x0bae,
	0x0bae,0x0bae,0x0bae,0x0aae,0x0aae,0x0aae,0x0aae,0x0abf,
	0x00ee,0x00de,0x00ce,0x00be,0x00ae,0x009e,0x009e,0x0b9e,
	0x0b9e,0x0b9e,0x0b9e,0x0a9e,0x0a9e,0x0a9e,0x0a9e,0x0aaf,
	0x01ee,0x00de,0x00ce,0x00be,0x00ae,0x009e,0x008e,0x008e,
	0x0b8e,0x0b8e,0x0b8e,0x0a8e,0x0a8e,0x0a8e,0x0a8e,0x0a9f,
	0x01ee,0x01de,0x01ce,0x00be,0x00ae,0x009e,0x008e,0x007e,
	0x007e,0x0b7e,0x0b7e,0x0b7e,0x0a7e,0x0a7e,0x0a7e,0x0a8f,
	0x01ee,0x01de,0x01ce,0x01be,0x01ae,0x009e,0x008e,0x007e,
	0x006e,0x006e,0x0b6e,0x0b6e,0x0a6e,0x0a6e,0x0a6e,0x0a7f,
	0x01ee,0x01de,0x01ce,0x01be,0x01ae,0x019e,0x008e,0x007e,
	0x006e,0x005e,0x005e,0x0b5e,0x0b5e,0x0a5e,0x0a5e,0x0a6f,
	0x01ee,0x01de,0x01ce,0x01be,0x01ae,0x019e,0x018e,0x017e,
	0x006e,0x005e,0x004e,0x0b4e,0x0b4e,0x0a4e,0x0a4e,0x0a5f,
	0x01ee,0x01de,0x01ce,0x01be,0x01ae,0x019e,0x018e,0x017e,
	0x016e,0x015e,0x004e,0x003e,0x0b3e,0x0a3e,0x0a3e,0x094f,
	0x02ee,0x02de,0x02ce,0x02be,0x02ae,0x019e,0x018e,0x017e,
	0x016e,0x015e,0x014e,0x003e,0x002e,0x0b2e,0x0a2e,0x093f,
	0x02ee,0x02de,0x02ce,0x02be,0x02ae,0x029e,0x028e,0x027e,
	0x026e,0x025e,0x014e,0x013e,0x012e,0x001e,0x0a1e,0x092f,
	0x02ee,0x02de,0x02ce,0x02be,0x02ae,0x029e,0x028e,0x027e,
	0x026e,0x025e,0x024e,0x023e,0x022e,0x021e,0x000e,0x081f,
	0x02ff,0x02ef,0x02df,0x02cf,0x02bf,0x02af,0x029f,0x028f,
	0x027f,0x026f,0x025f,0x024f,0x023f,0x032f,0x041f,0x061f,
	0x00ff,0x00ff,0x00ff,0x00ff,0x0bff,0x0bff,0x0bff,0x0bff,
	0x0bff,0x0bff,0x0aff,0x0aff,0x0aff,0x0aff,0x0aff,0x0aff,
	0x00ff,0x00ef,0x00ef,0x00ef,0x0bef,0x0bef,0x0bef,0x0bef,
	0x0bef,0x0bef,0x0aef,0x0aef,0x0aef,0x0aef,0x0aef,0x0aef,
	0x00ff,0x00ef,0x00df,0x00df,0x00df,0x0bdf,0x0bdf,0x0bdf,
	0x0bdf,0x0bdf,0x0adf,0x0adf,0x0adf,0x0adf,0x0adf,0x0adf,
	0x00ff,0x00ef,0x00df,0x00cf,0x00cf,0x00cf,0x0bcf,0x0bcf,
	0x0bcf,0x0bcf,0x0bcf,0x0acf,0x0acf,0x0acf,0x0acf,0x0acf,
	0x00ff,0x00ef,0x00df,0x00cf,0x00bf,0x00bf,0x00bf,0x0bbf,
	0x0bbf,0x0bbf,0x0bbf,0x0abf,0x0abf,0x0abf,0x0abf,0x0abf,
	0x00ff,0x00ef,0x00df,0x00cf,0x00bf,0x00af,0x00af,0x00af,
	0x0baf,0x0baf,0x0baf,0x0baf,0x0aaf,0x0aaf,0x0aaf,0x0aaf,
	0x01ff,0x00ef,0x00df,0x00cf,0x00bf,0x00af,0x009f,0x009f,
	0x0b9f,0x0b9f,0x0b9f,0x0b9f,0x0a9f,0x0a9f,0x0a9f,0x0a9f,
	0x01ff,0x01ef,0x00df,0x00cf,0x00bf,0x00af,0x009f,0x008f,
	0x008f,0x0b8f,0x0b8f,0x0b8f,0x0a8f,0x0a8f,0x0a8f,0x0a8f,
	0x01ff,0x01ef,0x01df,0x01cf,0x00bf,0x00af,0x009f,0x008f,
	0x007f,0x007f,0x0b7f,0x0b7f,0x0b7f,0x0a7f,0x0a7f,0x0a7f,
	0x01ff,0x01ef,0x01df,0x01cf,0x01bf,0x01af,0x009f,0x008f,
	0x007f,0x006f,0x006f,0x0b6f,0x0b6f,0x0a6f,0x0a6f,0x0a6f,
	0x01ff,0x01ef,0x01df,0x01cf,0x01bf,0x01af,0x019f,0x008f,
	0x007f,0x006f,0x005f,0x005f,0x0b5f,0x0b5f,0x0a5f,0x0a5f,
	0x01ff,0x01ef,0x01df,0x01cf,0x01bf,0x01af,0x019f,0x018f,
	0x017f,0x006f,0x005f,0x004f,0x0b4f,0x0b4f,0x0a4f,0x0a4f,
	0x02ff,0x01ef,0x01df,0x01cf,0x01bf,0x01af,0x019f,0x018f,
	0x017f,0x016f,0x015f,0x004f,0x003f,0x0b3f,0x0a3f,0x0a3f,
	0x02ff,0x02ef,0x02df,0x02cf,0x02bf,0x02af,0x019f,0x018f,
	0x017f,0x016f,0x015f,0x014f,0x003f,0x002f,0x0b2f,0x0a2f,
	0x02ff,0x02ef,0x02df,0x02cf,0x02bf,0x02af,0x029f,0x028f,
	0x027f,0x026f,0x025f,0x014f,0x013f,0x012f,0x001f,0x0a1f,
	0x02ff,0x02ef,0x02df,0x02cf,0x02bf,0x02af,0x029f,0x028f,
	0x027f,0x026f,0x025f,0x024f,0x023f,0x022f,0x021f,0x000f
};

#endif
