#include "symbols.h"

// ================================================================================================ //

#include "vd.h"
#include "constants/constants.h"

// ================================================================================================ //

VD_CONSTANTS_NAMESPACE_BEGIN();

// ================================================================================================ //

namespace Symbols {
namespace Global {

// ================================================================================================ //

const size_t Static::Count = 103UL;

// ================================================================================================ //

const vd::uid
Static::Keys[103] = 
{
	vd::uid(0x9257d8e8ed07c6a6ULL, 0x182278a768bf512fULL),
	vd::uid(0x428769b890b46d3cULL, 0x9ae7f34284aa545eULL),
	vd::uid(0xf7a5e1e1b0a43e0fULL, 0xee0f564ed6568c9fULL),
	vd::uid(0x8272f1fea9d93248ULL, 0xe50be92eff9879c1ULL),
	vd::uid(0x2867e0d06cc69100ULL, 0xc52eb489ca5d1203ULL),
	vd::uid(0x6d4d5724ca8621f5ULL, 0xb6014f4d67820d68ULL),
	vd::uid(0xf797c11e90cf447fULL, 0xbf54efd83f08b7c7ULL),
	vd::uid(0x12050b769199541cULL, 0xe9f408022c5fe9d1ULL),
	vd::uid(0x6230e30dfa392b01ULL, 0x42eb3774bbb1594dULL),
	vd::uid(0xb66c44a23e94a54bULL, 0x26d48b9e8c1d8aaULL),
	vd::uid(0xe006d4826b43f7dbULL, 0x2a7d42d9b5972e5fULL),
	vd::uid(0xa3da548c49690203ULL, 0x986f0b1a223cc5d8ULL),
	vd::uid(0x804cd2168fcebdf6ULL, 0xd770c8db75aa3dd3ULL),
	vd::uid(0xc09575eca68eeaaULL, 0xeebee558cc7e8e8ULL),
	vd::uid(0x257ceb25eaf425b4ULL, 0xf01843878f788c19ULL),
	vd::uid(0xe4936f5f2ed78adULL, 0xaabdb533445e44a9ULL),
	vd::uid(0x32b711a0ae3f8386ULL, 0xf0677852def9680eULL),
	vd::uid(0x5cb490c5d6ba7eedULL, 0x5fbdc4372701f773ULL),
	vd::uid(0x506eb025bdd1adf6ULL, 0x3bc855ac45b7cdccULL),
	vd::uid(0x4f8de78673f628c7ULL, 0x1c6fff5d1ce9188fULL),
	vd::uid(0x849f41753c6a4ad1ULL, 0xd5d515741de499c2ULL),
	vd::uid(0x9034ed59f1e7c0bULL, 0x117984158e6797cULL),
	vd::uid(0x4f6616108e877474ULL, 0x77a6de6a6298af28ULL),
	vd::uid(0xbea38a7f13bccd83ULL, 0x88d01b3b21a14c59ULL),
	vd::uid(0xfb54a513497129bcULL, 0x9fc012db099b95fULL),
	vd::uid(0xfc77ebdc592c4a25ULL, 0xbfe524c97a1e6100ULL),
	vd::uid(0x129150c18d5e2731ULL, 0x98869529ea7a866bULL),
	vd::uid(0x2e47c4d51a1712aULL, 0x2e5737d88d70c47bULL),
	vd::uid(0x8b8e392a5bfe0cfaULL, 0xf12da652b4376d07ULL),
	vd::uid(0xfa97c51475a05a78ULL, 0x63f42193f0fd46b4ULL),
	vd::uid(0x474323f9e55dfd46ULL, 0x5e91adc334607686ULL),
	vd::uid(0x7b1bfa0a7d9c6a48ULL, 0x1f03f87b26dc707aULL),
	vd::uid(0xf7315cf81cb697f3ULL, 0xd04246831ea97a7cULL),
	vd::uid(0x7057b55850765c74ULL, 0x124809be662470b7ULL),
	vd::uid(0x91168490a6c17bfbULL, 0x1e24e2b3557529c2ULL),
	vd::uid(0x52d113913ef68e91ULL, 0x5ad7ea5e03c79b4eULL),
	vd::uid(0x9d35966aab0546aULL, 0xd7708280f99466abULL),
	vd::uid(0x1234c608369737a3ULL, 0x30cd673199b06d08ULL),
	vd::uid(0x9f4084cb41c0351aULL, 0x9b4062c757ff5c02ULL),
	vd::uid(0x704aed49c68af769ULL, 0x31b47736f36087fbULL),
	vd::uid(0xa894c19c4aa358daULL, 0xf1d7407490589823ULL),
	vd::uid(0xd006c19f67d8f1c9ULL, 0x3c6bd6d2c4c7b88fULL),
	vd::uid(0x1be1dea5a25f68ebULL, 0xdf893f5f52792da2ULL),
	vd::uid(0x3499c912f3ba7560ULL, 0x956956440590a658ULL),
	vd::uid(0x77803ec821355be4ULL, 0x4db32050b620b54fULL),
	vd::uid(0x302e1b54bbe1c4e4ULL, 0x12043912dbc3d0f2ULL),
	vd::uid(0xecd7bf0c4671276ULL, 0x6952f5a37acc7faULL),
	vd::uid(0x339ff38f209e31bcULL, 0x4c9c96f31025bd41ULL),
	vd::uid(0x59a0acd3e1eecc32ULL, 0x74a7709ced3881c5ULL),
	vd::uid(0xf7149230303400bcULL, 0x1f470fff1ffbb0b1ULL),
	vd::uid(0x5efd2d796385324cULL, 0xaff920542e36bd0ULL),
	vd::uid(0xb4c909c13a0f1041ULL, 0xa3454deef1fb535dULL),
	vd::uid(0xfccc7007c2acff93ULL, 0x244134da42de7b13ULL),
	vd::uid(0x9565059da9d0f4a4ULL, 0x38e05403917fdcccULL),
	vd::uid(0x597088442f491675ULL, 0xd68f54695c1aa3d7ULL),
	vd::uid(0xabcf53c42812fc39ULL, 0x661d98a8b0a5404fULL),
	vd::uid(0x130c3ef213713a49ULL, 0x788f9e7d7611f98eULL),
	vd::uid(0x3b54f992c6735d45ULL, 0x56413b11549e259cULL),
	vd::uid(0x95959fc3e4273398ULL, 0x3ecde25d7a4799c0ULL),
	vd::uid(0xcd234439ca656683ULL, 0x25ebd467a13b049cULL),
	vd::uid(0x86bb7831d33d5c25ULL, 0xd040d67ea1c5c6ceULL),
	vd::uid(0x6b5e533a2e0ef822ULL, 0xb90a00086abfa2dbULL),
	vd::uid(0xd6fc2ae139dea31ULL, 0x88f06e8a635393beULL),
	vd::uid(0x6ad0e357f55fde07ULL, 0x28a43e210171edf1ULL),
	vd::uid(0xf5fbf743d6c90a84ULL, 0xfe1c2e562001b235ULL),
	vd::uid(0x83dc9f383347ce99ULL, 0x5990f35f0dd39e72ULL),
	vd::uid(0xf8812e7ff350a022ULL, 0xf7b24ce49d2507eeULL),
	vd::uid(0x1a501dd6234b4535ULL, 0xcfa7df3532cab8a8ULL),
	vd::uid(0x31a16ba121015a85ULL, 0x6c9e504e9c740d7fULL),
	vd::uid(0x28cc95e9a1f44d9aULL, 0xc60f56fe5064e924ULL),
	vd::uid(0x9fbabbac4eb9bc1fULL, 0xc98aa1be58f88008ULL),
	vd::uid(0x91df29988e27738bULL, 0x7e36706b357be0d8ULL),
	vd::uid(0x38de351009f1b563ULL, 0x1cc23e5c8fdd1d2cULL),
	vd::uid(0x755d15cca45e76beULL, 0x33fb62ec7a739967ULL),
	vd::uid(0x1ca570a0cde97bf0ULL, 0xc98ed01a0683724dULL),
	vd::uid(0xd3660f2a4587910ULL, 0xd7f001c31d93cf7ULL),
	vd::uid(0x533c85d0778cb4c0ULL, 0x6e2e452aac49bf94ULL),
	vd::uid(0x902f444ba738e261ULL, 0xb62e24acb57fb34eULL),
	vd::uid(0x5467857f4d23285dULL, 0xa3f637897b7d6098ULL),
	vd::uid(0x7c8bf944104aff2cULL, 0xc5c5a20a782ef4a1ULL),
	vd::uid(0x5ba028c7f4dda1a6ULL, 0x37e2836c99da00f1ULL),
	vd::uid(0x44dd0d29429301fbULL, 0x72f240f69c598b45ULL),
	vd::uid(0xa2c20e1bb61e5e59ULL, 0x5f8fef7d6c0e5fecULL),
	vd::uid(0x28db03d1259d66f9ULL, 0xc0cef3de79af561aULL),
	vd::uid(0x457472dcc675680ULL, 0x70e0527c01b85722ULL),
	vd::uid(0x502ee05628526dffULL, 0x92d8508e0c514018ULL),
	vd::uid(0xf10ad93e5855bb63ULL, 0xd2abde72cfe1cc0ULL),
	vd::uid(0xefe15dcb11dec185ULL, 0xeb666484834d1bfeULL),
	vd::uid(0x2a24fcecba8f5d36ULL, 0xbee8a95ea69ee7e3ULL),
	vd::uid(0x708b0470b1a6c0c8ULL, 0xfbab12235916a770ULL),
	vd::uid(0x8266b0c1ae2b74e6ULL, 0xfc64826b002423bcULL),
	vd::uid(0xb76cc6154ca627c3ULL, 0xfa4ada2c621acd88ULL),
	vd::uid(0xe36ddb2774996e9eULL, 0xac5db6abe00a11eaULL),
	vd::uid(0x134f64ef6673aae8ULL, 0xf7c96dd6fb8e4f98ULL),
	vd::uid(0x9b4531040adad9f2ULL, 0xded4ed4b440082e0ULL),
	vd::uid(0x1924f97baf4ab65ULL, 0xe57d51957a5153d3ULL),
	vd::uid(0xb221d4ff81cc3877ULL, 0x96e8231d5063a604ULL),
	vd::uid(0x7df776fda7f10df3ULL, 0xa7c7f11d690bfc97ULL),
	vd::uid(0xcede3fa2803f46dbULL, 0x2fab4397b79ed7dcULL),
	vd::uid(0xac11f9120897396fULL, 0xd6a52caf1511783cULL),
	vd::uid(0xddcdf775d664febaULL, 0x9f177465443d1d2aULL),
	vd::uid(0x7f7418e1c61a3125ULL, 0x231253563b3cfd3fULL),
	vd::uid(0xc9ddf94e64e9f364ULL, 0x20d3cfa192b26d6cULL)
};

// ================================================================================================ //

const char*
Static::Strings[103] = 
{
	"Invalid",
	"AlphaBias",
	"AlphaScale",
	"Application",
	"BoxSize",
	"Buffer",
	"CameraPosition",
	"CocoaWindow",
	"ColorRange",
	"Compiler",
	"DefaultLogFormat",
	"DensityRange",
	"DensityScale",
	"Entity",
	"ExposureScale",
	"FieldOfView",
	"FileAccess",
	"Framebuffer",
	"GL_BOOL_ARB",
	"GL_BOOL_VEC2_ARB",
	"GL_BOOL_VEC3_ARB",
	"GL_BOOL_VEC4_ARB",
	"GL_FLOAT",
	"GL_FLOAT_MAT2_ARB",
	"GL_FLOAT_MAT3_ARB",
	"GL_FLOAT_MAT4_ARB",
	"GL_FLOAT_VEC2_ARB",
	"GL_FLOAT_VEC3_ARB",
	"GL_FLOAT_VEC4_ARB",
	"GL_INT",
	"GL_INT_VEC2_ARB",
	"GL_INT_VEC3_ARB",
	"GL_INT_VEC4_ARB",
	"GL_INVALID",
	"GL_SAMPLER_1D",
	"GL_SAMPLER_1D_SHADOW_ARB",
	"GL_SAMPLER_2D",
	"GL_SAMPLER_2D_SHADOW_ARB",
	"GL_SAMPLER_3D",
	"GadgetDataFile",
	"GadgetDataSet",
	"GadgetSnapshot",
	"GadgetWorkItem",
	"GadgetWorkQueue",
	"Geometry",
	"GlfwWindow",
	"GlutWindow",
	"GraphicsContext",
	"GraphicsShader",
	"GwenContext",
	"HiDistData",
	"HiDistDataset",
	"HiDistWorkItem",
	"HiDistWorkQueue",
	"ImageInput",
	"ImageOutput",
	"IntensityBias",
	"IntensityScale",
	"InterfaceWindow",
	"LogChannel",
	"LogContext",
	"LogFormat",
	"MainThread",
	"MaxPointScale",
	"MemoryIndex",
	"MinPointScale",
	"ModelView",
	"Module",
	"MotionPointBasedRenderer",
	"MotionSpeed",
	"MotionTime",
	"MotionTransform",
	"Object",
	"OpenGLContext",
	"OpenGLShader",
	"ParamSet",
	"ParticleColor",
	"ParticleDensity",
	"ParticleRadius",
	"PointScale",
	"Projection",
	"RawFileLog",
	"Repository",
	"RuntimeContext",
	"ScreenSize",
	"Serializable",
	"SmoothingRadius",
	"SmoothingScale",
	"SphPointBasedRenderer",
	"Stream",
	"StreamLog",
	"SymbolRegistry",
	"Thread",
	"TiledRenderer",
	"Timer",
	"UseGlfw",
	"UseGlut",
	"VertexRange",
	"WdC",
	"WorkItem",
	"WorkQueue",
	"WorkThread",
	"X"
};


// ================================================================================================ //

const vd::symbol
Static::Table[103] = 
{
	vd::symbol( Static::Keys[ Static::IdInvalid ], Static::Strings[ Static::IdInvalid ] ),
	vd::symbol( Static::Keys[ Static::IdAlphaBias ], Static::Strings[ Static::IdAlphaBias ] ),
	vd::symbol( Static::Keys[ Static::IdAlphaScale ], Static::Strings[ Static::IdAlphaScale ] ),
	vd::symbol( Static::Keys[ Static::IdApplication ], Static::Strings[ Static::IdApplication ] ),
	vd::symbol( Static::Keys[ Static::IdBoxSize ], Static::Strings[ Static::IdBoxSize ] ),
	vd::symbol( Static::Keys[ Static::IdBuffer ], Static::Strings[ Static::IdBuffer ] ),
	vd::symbol( Static::Keys[ Static::IdCameraPosition ], Static::Strings[ Static::IdCameraPosition ] ),
	vd::symbol( Static::Keys[ Static::IdCocoaWindow ], Static::Strings[ Static::IdCocoaWindow ] ),
	vd::symbol( Static::Keys[ Static::IdColorRange ], Static::Strings[ Static::IdColorRange ] ),
	vd::symbol( Static::Keys[ Static::IdCompiler ], Static::Strings[ Static::IdCompiler ] ),
	vd::symbol( Static::Keys[ Static::IdDefaultLogFormat ], Static::Strings[ Static::IdDefaultLogFormat ] ),
	vd::symbol( Static::Keys[ Static::IdDensityRange ], Static::Strings[ Static::IdDensityRange ] ),
	vd::symbol( Static::Keys[ Static::IdDensityScale ], Static::Strings[ Static::IdDensityScale ] ),
	vd::symbol( Static::Keys[ Static::IdEntity ], Static::Strings[ Static::IdEntity ] ),
	vd::symbol( Static::Keys[ Static::IdExposureScale ], Static::Strings[ Static::IdExposureScale ] ),
	vd::symbol( Static::Keys[ Static::IdFieldOfView ], Static::Strings[ Static::IdFieldOfView ] ),
	vd::symbol( Static::Keys[ Static::IdFileAccess ], Static::Strings[ Static::IdFileAccess ] ),
	vd::symbol( Static::Keys[ Static::IdFramebuffer ], Static::Strings[ Static::IdFramebuffer ] ),
	vd::symbol( Static::Keys[ Static::IdGL_BOOL_ARB ], Static::Strings[ Static::IdGL_BOOL_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_BOOL_VEC2_ARB ], Static::Strings[ Static::IdGL_BOOL_VEC2_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_BOOL_VEC3_ARB ], Static::Strings[ Static::IdGL_BOOL_VEC3_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_BOOL_VEC4_ARB ], Static::Strings[ Static::IdGL_BOOL_VEC4_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_FLOAT ], Static::Strings[ Static::IdGL_FLOAT ] ),
	vd::symbol( Static::Keys[ Static::IdGL_FLOAT_MAT2_ARB ], Static::Strings[ Static::IdGL_FLOAT_MAT2_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_FLOAT_MAT3_ARB ], Static::Strings[ Static::IdGL_FLOAT_MAT3_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_FLOAT_MAT4_ARB ], Static::Strings[ Static::IdGL_FLOAT_MAT4_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_FLOAT_VEC2_ARB ], Static::Strings[ Static::IdGL_FLOAT_VEC2_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_FLOAT_VEC3_ARB ], Static::Strings[ Static::IdGL_FLOAT_VEC3_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_FLOAT_VEC4_ARB ], Static::Strings[ Static::IdGL_FLOAT_VEC4_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_INT ], Static::Strings[ Static::IdGL_INT ] ),
	vd::symbol( Static::Keys[ Static::IdGL_INT_VEC2_ARB ], Static::Strings[ Static::IdGL_INT_VEC2_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_INT_VEC3_ARB ], Static::Strings[ Static::IdGL_INT_VEC3_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_INT_VEC4_ARB ], Static::Strings[ Static::IdGL_INT_VEC4_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_INVALID ], Static::Strings[ Static::IdGL_INVALID ] ),
	vd::symbol( Static::Keys[ Static::IdGL_SAMPLER_1D ], Static::Strings[ Static::IdGL_SAMPLER_1D ] ),
	vd::symbol( Static::Keys[ Static::IdGL_SAMPLER_1D_SHADOW_ARB ], Static::Strings[ Static::IdGL_SAMPLER_1D_SHADOW_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_SAMPLER_2D ], Static::Strings[ Static::IdGL_SAMPLER_2D ] ),
	vd::symbol( Static::Keys[ Static::IdGL_SAMPLER_2D_SHADOW_ARB ], Static::Strings[ Static::IdGL_SAMPLER_2D_SHADOW_ARB ] ),
	vd::symbol( Static::Keys[ Static::IdGL_SAMPLER_3D ], Static::Strings[ Static::IdGL_SAMPLER_3D ] ),
	vd::symbol( Static::Keys[ Static::IdGadgetDataFile ], Static::Strings[ Static::IdGadgetDataFile ] ),
	vd::symbol( Static::Keys[ Static::IdGadgetDataSet ], Static::Strings[ Static::IdGadgetDataSet ] ),
	vd::symbol( Static::Keys[ Static::IdGadgetSnapshot ], Static::Strings[ Static::IdGadgetSnapshot ] ),
	vd::symbol( Static::Keys[ Static::IdGadgetWorkItem ], Static::Strings[ Static::IdGadgetWorkItem ] ),
	vd::symbol( Static::Keys[ Static::IdGadgetWorkQueue ], Static::Strings[ Static::IdGadgetWorkQueue ] ),
	vd::symbol( Static::Keys[ Static::IdGeometry ], Static::Strings[ Static::IdGeometry ] ),
	vd::symbol( Static::Keys[ Static::IdGlfwWindow ], Static::Strings[ Static::IdGlfwWindow ] ),
	vd::symbol( Static::Keys[ Static::IdGlutWindow ], Static::Strings[ Static::IdGlutWindow ] ),
	vd::symbol( Static::Keys[ Static::IdGraphicsContext ], Static::Strings[ Static::IdGraphicsContext ] ),
	vd::symbol( Static::Keys[ Static::IdGraphicsShader ], Static::Strings[ Static::IdGraphicsShader ] ),
	vd::symbol( Static::Keys[ Static::IdGwenContext ], Static::Strings[ Static::IdGwenContext ] ),
	vd::symbol( Static::Keys[ Static::IdHiDistData ], Static::Strings[ Static::IdHiDistData ] ),
	vd::symbol( Static::Keys[ Static::IdHiDistDataset ], Static::Strings[ Static::IdHiDistDataset ] ),
	vd::symbol( Static::Keys[ Static::IdHiDistWorkItem ], Static::Strings[ Static::IdHiDistWorkItem ] ),
	vd::symbol( Static::Keys[ Static::IdHiDistWorkQueue ], Static::Strings[ Static::IdHiDistWorkQueue ] ),
	vd::symbol( Static::Keys[ Static::IdImageInput ], Static::Strings[ Static::IdImageInput ] ),
	vd::symbol( Static::Keys[ Static::IdImageOutput ], Static::Strings[ Static::IdImageOutput ] ),
	vd::symbol( Static::Keys[ Static::IdIntensityBias ], Static::Strings[ Static::IdIntensityBias ] ),
	vd::symbol( Static::Keys[ Static::IdIntensityScale ], Static::Strings[ Static::IdIntensityScale ] ),
	vd::symbol( Static::Keys[ Static::IdInterfaceWindow ], Static::Strings[ Static::IdInterfaceWindow ] ),
	vd::symbol( Static::Keys[ Static::IdLogChannel ], Static::Strings[ Static::IdLogChannel ] ),
	vd::symbol( Static::Keys[ Static::IdLogContext ], Static::Strings[ Static::IdLogContext ] ),
	vd::symbol( Static::Keys[ Static::IdLogFormat ], Static::Strings[ Static::IdLogFormat ] ),
	vd::symbol( Static::Keys[ Static::IdMainThread ], Static::Strings[ Static::IdMainThread ] ),
	vd::symbol( Static::Keys[ Static::IdMaxPointScale ], Static::Strings[ Static::IdMaxPointScale ] ),
	vd::symbol( Static::Keys[ Static::IdMemoryIndex ], Static::Strings[ Static::IdMemoryIndex ] ),
	vd::symbol( Static::Keys[ Static::IdMinPointScale ], Static::Strings[ Static::IdMinPointScale ] ),
	vd::symbol( Static::Keys[ Static::IdModelView ], Static::Strings[ Static::IdModelView ] ),
	vd::symbol( Static::Keys[ Static::IdModule ], Static::Strings[ Static::IdModule ] ),
	vd::symbol( Static::Keys[ Static::IdMotionPointBasedRenderer ], Static::Strings[ Static::IdMotionPointBasedRenderer ] ),
	vd::symbol( Static::Keys[ Static::IdMotionSpeed ], Static::Strings[ Static::IdMotionSpeed ] ),
	vd::symbol( Static::Keys[ Static::IdMotionTime ], Static::Strings[ Static::IdMotionTime ] ),
	vd::symbol( Static::Keys[ Static::IdMotionTransform ], Static::Strings[ Static::IdMotionTransform ] ),
	vd::symbol( Static::Keys[ Static::IdObject ], Static::Strings[ Static::IdObject ] ),
	vd::symbol( Static::Keys[ Static::IdOpenGLContext ], Static::Strings[ Static::IdOpenGLContext ] ),
	vd::symbol( Static::Keys[ Static::IdOpenGLShader ], Static::Strings[ Static::IdOpenGLShader ] ),
	vd::symbol( Static::Keys[ Static::IdParamSet ], Static::Strings[ Static::IdParamSet ] ),
	vd::symbol( Static::Keys[ Static::IdParticleColor ], Static::Strings[ Static::IdParticleColor ] ),
	vd::symbol( Static::Keys[ Static::IdParticleDensity ], Static::Strings[ Static::IdParticleDensity ] ),
	vd::symbol( Static::Keys[ Static::IdParticleRadius ], Static::Strings[ Static::IdParticleRadius ] ),
	vd::symbol( Static::Keys[ Static::IdPointScale ], Static::Strings[ Static::IdPointScale ] ),
	vd::symbol( Static::Keys[ Static::IdProjection ], Static::Strings[ Static::IdProjection ] ),
	vd::symbol( Static::Keys[ Static::IdRawFileLog ], Static::Strings[ Static::IdRawFileLog ] ),
	vd::symbol( Static::Keys[ Static::IdRepository ], Static::Strings[ Static::IdRepository ] ),
	vd::symbol( Static::Keys[ Static::IdRuntimeContext ], Static::Strings[ Static::IdRuntimeContext ] ),
	vd::symbol( Static::Keys[ Static::IdScreenSize ], Static::Strings[ Static::IdScreenSize ] ),
	vd::symbol( Static::Keys[ Static::IdSerializable ], Static::Strings[ Static::IdSerializable ] ),
	vd::symbol( Static::Keys[ Static::IdSmoothingRadius ], Static::Strings[ Static::IdSmoothingRadius ] ),
	vd::symbol( Static::Keys[ Static::IdSmoothingScale ], Static::Strings[ Static::IdSmoothingScale ] ),
	vd::symbol( Static::Keys[ Static::IdSphPointBasedRenderer ], Static::Strings[ Static::IdSphPointBasedRenderer ] ),
	vd::symbol( Static::Keys[ Static::IdStream ], Static::Strings[ Static::IdStream ] ),
	vd::symbol( Static::Keys[ Static::IdStreamLog ], Static::Strings[ Static::IdStreamLog ] ),
	vd::symbol( Static::Keys[ Static::IdSymbolRegistry ], Static::Strings[ Static::IdSymbolRegistry ] ),
	vd::symbol( Static::Keys[ Static::IdThread ], Static::Strings[ Static::IdThread ] ),
	vd::symbol( Static::Keys[ Static::IdTiledRenderer ], Static::Strings[ Static::IdTiledRenderer ] ),
	vd::symbol( Static::Keys[ Static::IdTimer ], Static::Strings[ Static::IdTimer ] ),
	vd::symbol( Static::Keys[ Static::IdUseGlfw ], Static::Strings[ Static::IdUseGlfw ] ),
	vd::symbol( Static::Keys[ Static::IdUseGlut ], Static::Strings[ Static::IdUseGlut ] ),
	vd::symbol( Static::Keys[ Static::IdVertexRange ], Static::Strings[ Static::IdVertexRange ] ),
	vd::symbol( Static::Keys[ Static::IdWdC ], Static::Strings[ Static::IdWdC ] ),
	vd::symbol( Static::Keys[ Static::IdWorkItem ], Static::Strings[ Static::IdWorkItem ] ),
	vd::symbol( Static::Keys[ Static::IdWorkQueue ], Static::Strings[ Static::IdWorkQueue ] ),
	vd::symbol( Static::Keys[ Static::IdWorkThread ], Static::Strings[ Static::IdWorkThread ] ),
	vd::symbol( Static::Keys[ Static::IdX ], Static::Strings[ Static::IdX ] )
};

// ================================================================================================ //

} // end namespace: Global
} // end namespace: Symbols

// ================================================================================================ //

VD_CONSTANTS_NAMESPACE_END();

// ================================================================================================ //
