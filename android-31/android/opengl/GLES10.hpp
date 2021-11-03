#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JIntArray;
class JString;
namespace java::nio
{
	class Buffer;
}
namespace java::nio
{
	class FloatBuffer;
}
namespace java::nio
{
	class IntBuffer;
}

namespace android::opengl
{
	class GLES10 : public JObject
	{
	public:
		// Fields
		static jint GL_ADD();
		static jint GL_ALIASED_LINE_WIDTH_RANGE();
		static jint GL_ALIASED_POINT_SIZE_RANGE();
		static jint GL_ALPHA();
		static jint GL_ALPHA_BITS();
		static jint GL_ALPHA_TEST();
		static jint GL_ALWAYS();
		static jint GL_AMBIENT();
		static jint GL_AMBIENT_AND_DIFFUSE();
		static jint GL_AND();
		static jint GL_AND_INVERTED();
		static jint GL_AND_REVERSE();
		static jint GL_BACK();
		static jint GL_BLEND();
		static jint GL_BLUE_BITS();
		static jint GL_BYTE();
		static jint GL_CCW();
		static jint GL_CLAMP_TO_EDGE();
		static jint GL_CLEAR();
		static jint GL_COLOR_ARRAY();
		static jint GL_COLOR_BUFFER_BIT();
		static jint GL_COLOR_LOGIC_OP();
		static jint GL_COLOR_MATERIAL();
		static jint GL_COMPRESSED_TEXTURE_FORMATS();
		static jint GL_CONSTANT_ATTENUATION();
		static jint GL_COPY();
		static jint GL_COPY_INVERTED();
		static jint GL_CULL_FACE();
		static jint GL_CW();
		static jint GL_DECAL();
		static jint GL_DECR();
		static jint GL_DEPTH_BITS();
		static jint GL_DEPTH_BUFFER_BIT();
		static jint GL_DEPTH_TEST();
		static jint GL_DIFFUSE();
		static jint GL_DITHER();
		static jint GL_DONT_CARE();
		static jint GL_DST_ALPHA();
		static jint GL_DST_COLOR();
		static jint GL_EMISSION();
		static jint GL_EQUAL();
		static jint GL_EQUIV();
		static jint GL_EXP();
		static jint GL_EXP2();
		static jint GL_EXTENSIONS();
		static jint GL_FALSE();
		static jint GL_FASTEST();
		static jint GL_FIXED();
		static jint GL_FLAT();
		static jint GL_FLOAT();
		static jint GL_FOG();
		static jint GL_FOG_COLOR();
		static jint GL_FOG_DENSITY();
		static jint GL_FOG_END();
		static jint GL_FOG_HINT();
		static jint GL_FOG_MODE();
		static jint GL_FOG_START();
		static jint GL_FRONT();
		static jint GL_FRONT_AND_BACK();
		static jint GL_GEQUAL();
		static jint GL_GREATER();
		static jint GL_GREEN_BITS();
		static jint GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES();
		static jint GL_IMPLEMENTATION_COLOR_READ_TYPE_OES();
		static jint GL_INCR();
		static jint GL_INVALID_ENUM();
		static jint GL_INVALID_OPERATION();
		static jint GL_INVALID_VALUE();
		static jint GL_INVERT();
		static jint GL_KEEP();
		static jint GL_LEQUAL();
		static jint GL_LESS();
		static jint GL_LIGHT0();
		static jint GL_LIGHT1();
		static jint GL_LIGHT2();
		static jint GL_LIGHT3();
		static jint GL_LIGHT4();
		static jint GL_LIGHT5();
		static jint GL_LIGHT6();
		static jint GL_LIGHT7();
		static jint GL_LIGHTING();
		static jint GL_LIGHT_MODEL_AMBIENT();
		static jint GL_LIGHT_MODEL_TWO_SIDE();
		static jint GL_LINEAR();
		static jint GL_LINEAR_ATTENUATION();
		static jint GL_LINEAR_MIPMAP_LINEAR();
		static jint GL_LINEAR_MIPMAP_NEAREST();
		static jint GL_LINES();
		static jint GL_LINE_LOOP();
		static jint GL_LINE_SMOOTH();
		static jint GL_LINE_SMOOTH_HINT();
		static jint GL_LINE_STRIP();
		static jint GL_LUMINANCE();
		static jint GL_LUMINANCE_ALPHA();
		static jint GL_MAX_ELEMENTS_INDICES();
		static jint GL_MAX_ELEMENTS_VERTICES();
		static jint GL_MAX_LIGHTS();
		static jint GL_MAX_MODELVIEW_STACK_DEPTH();
		static jint GL_MAX_PROJECTION_STACK_DEPTH();
		static jint GL_MAX_TEXTURE_SIZE();
		static jint GL_MAX_TEXTURE_STACK_DEPTH();
		static jint GL_MAX_TEXTURE_UNITS();
		static jint GL_MAX_VIEWPORT_DIMS();
		static jint GL_MODELVIEW();
		static jint GL_MODULATE();
		static jint GL_MULTISAMPLE();
		static jint GL_NAND();
		static jint GL_NEAREST();
		static jint GL_NEAREST_MIPMAP_LINEAR();
		static jint GL_NEAREST_MIPMAP_NEAREST();
		static jint GL_NEVER();
		static jint GL_NICEST();
		static jint GL_NOOP();
		static jint GL_NOR();
		static jint GL_NORMALIZE();
		static jint GL_NORMAL_ARRAY();
		static jint GL_NOTEQUAL();
		static jint GL_NO_ERROR();
		static jint GL_NUM_COMPRESSED_TEXTURE_FORMATS();
		static jint GL_ONE();
		static jint GL_ONE_MINUS_DST_ALPHA();
		static jint GL_ONE_MINUS_DST_COLOR();
		static jint GL_ONE_MINUS_SRC_ALPHA();
		static jint GL_ONE_MINUS_SRC_COLOR();
		static jint GL_OR();
		static jint GL_OR_INVERTED();
		static jint GL_OR_REVERSE();
		static jint GL_OUT_OF_MEMORY();
		static jint GL_PACK_ALIGNMENT();
		static jint GL_PALETTE4_R5_G6_B5_OES();
		static jint GL_PALETTE4_RGB5_A1_OES();
		static jint GL_PALETTE4_RGB8_OES();
		static jint GL_PALETTE4_RGBA4_OES();
		static jint GL_PALETTE4_RGBA8_OES();
		static jint GL_PALETTE8_R5_G6_B5_OES();
		static jint GL_PALETTE8_RGB5_A1_OES();
		static jint GL_PALETTE8_RGB8_OES();
		static jint GL_PALETTE8_RGBA4_OES();
		static jint GL_PALETTE8_RGBA8_OES();
		static jint GL_PERSPECTIVE_CORRECTION_HINT();
		static jint GL_POINTS();
		static jint GL_POINT_FADE_THRESHOLD_SIZE();
		static jint GL_POINT_SIZE();
		static jint GL_POINT_SMOOTH();
		static jint GL_POINT_SMOOTH_HINT();
		static jint GL_POLYGON_OFFSET_FILL();
		static jint GL_POLYGON_SMOOTH_HINT();
		static jint GL_POSITION();
		static jint GL_PROJECTION();
		static jint GL_QUADRATIC_ATTENUATION();
		static jint GL_RED_BITS();
		static jint GL_RENDERER();
		static jint GL_REPEAT();
		static jint GL_REPLACE();
		static jint GL_RESCALE_NORMAL();
		static jint GL_RGB();
		static jint GL_RGBA();
		static jint GL_SAMPLE_ALPHA_TO_COVERAGE();
		static jint GL_SAMPLE_ALPHA_TO_ONE();
		static jint GL_SAMPLE_COVERAGE();
		static jint GL_SCISSOR_TEST();
		static jint GL_SET();
		static jint GL_SHININESS();
		static jint GL_SHORT();
		static jint GL_SMOOTH();
		static jint GL_SMOOTH_LINE_WIDTH_RANGE();
		static jint GL_SMOOTH_POINT_SIZE_RANGE();
		static jint GL_SPECULAR();
		static jint GL_SPOT_CUTOFF();
		static jint GL_SPOT_DIRECTION();
		static jint GL_SPOT_EXPONENT();
		static jint GL_SRC_ALPHA();
		static jint GL_SRC_ALPHA_SATURATE();
		static jint GL_SRC_COLOR();
		static jint GL_STACK_OVERFLOW();
		static jint GL_STACK_UNDERFLOW();
		static jint GL_STENCIL_BITS();
		static jint GL_STENCIL_BUFFER_BIT();
		static jint GL_STENCIL_TEST();
		static jint GL_SUBPIXEL_BITS();
		static jint GL_TEXTURE();
		static jint GL_TEXTURE0();
		static jint GL_TEXTURE1();
		static jint GL_TEXTURE10();
		static jint GL_TEXTURE11();
		static jint GL_TEXTURE12();
		static jint GL_TEXTURE13();
		static jint GL_TEXTURE14();
		static jint GL_TEXTURE15();
		static jint GL_TEXTURE16();
		static jint GL_TEXTURE17();
		static jint GL_TEXTURE18();
		static jint GL_TEXTURE19();
		static jint GL_TEXTURE2();
		static jint GL_TEXTURE20();
		static jint GL_TEXTURE21();
		static jint GL_TEXTURE22();
		static jint GL_TEXTURE23();
		static jint GL_TEXTURE24();
		static jint GL_TEXTURE25();
		static jint GL_TEXTURE26();
		static jint GL_TEXTURE27();
		static jint GL_TEXTURE28();
		static jint GL_TEXTURE29();
		static jint GL_TEXTURE3();
		static jint GL_TEXTURE30();
		static jint GL_TEXTURE31();
		static jint GL_TEXTURE4();
		static jint GL_TEXTURE5();
		static jint GL_TEXTURE6();
		static jint GL_TEXTURE7();
		static jint GL_TEXTURE8();
		static jint GL_TEXTURE9();
		static jint GL_TEXTURE_2D();
		static jint GL_TEXTURE_COORD_ARRAY();
		static jint GL_TEXTURE_ENV();
		static jint GL_TEXTURE_ENV_COLOR();
		static jint GL_TEXTURE_ENV_MODE();
		static jint GL_TEXTURE_MAG_FILTER();
		static jint GL_TEXTURE_MIN_FILTER();
		static jint GL_TEXTURE_WRAP_S();
		static jint GL_TEXTURE_WRAP_T();
		static jint GL_TRIANGLES();
		static jint GL_TRIANGLE_FAN();
		static jint GL_TRIANGLE_STRIP();
		static jint GL_TRUE();
		static jint GL_UNPACK_ALIGNMENT();
		static jint GL_UNSIGNED_BYTE();
		static jint GL_UNSIGNED_SHORT();
		static jint GL_UNSIGNED_SHORT_4_4_4_4();
		static jint GL_UNSIGNED_SHORT_5_5_5_1();
		static jint GL_UNSIGNED_SHORT_5_6_5();
		static jint GL_VENDOR();
		static jint GL_VERSION();
		static jint GL_VERTEX_ARRAY();
		static jint GL_XOR();
		static jint GL_ZERO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLES10(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GLES10(QAndroidJniObject obj);
		
		// Constructors
		GLES10();
		
		// Methods
		static void glActiveTexture(jint arg0);
		static void glAlphaFunc(jint arg0, jfloat arg1);
		static void glAlphaFuncx(jint arg0, jint arg1);
		static void glBindTexture(jint arg0, jint arg1);
		static void glBlendFunc(jint arg0, jint arg1);
		static void glClear(jint arg0);
		static void glClearColor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static void glClearColorx(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glClearDepthf(jfloat arg0);
		static void glClearDepthx(jint arg0);
		static void glClearStencil(jint arg0);
		static void glClientActiveTexture(jint arg0);
		static void glColor4f(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static void glColor4x(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glColorMask(jboolean arg0, jboolean arg1, jboolean arg2, jboolean arg3);
		static void glColorPointer(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3);
		static void glCompressedTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::nio::Buffer arg7);
		static void glCompressedTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8);
		static void glCopyTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		static void glCopyTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		static void glCullFace(jint arg0);
		static void glDeleteTextures(jint arg0, java::nio::IntBuffer arg1);
		static void glDeleteTextures(jint arg0, JIntArray arg1, jint arg2);
		static void glDepthFunc(jint arg0);
		static void glDepthMask(jboolean arg0);
		static void glDepthRangef(jfloat arg0, jfloat arg1);
		static void glDepthRangex(jint arg0, jint arg1);
		static void glDisable(jint arg0);
		static void glDisableClientState(jint arg0);
		static void glDrawArrays(jint arg0, jint arg1, jint arg2);
		static void glDrawElements(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3);
		static void glEnable(jint arg0);
		static void glEnableClientState(jint arg0);
		static void glFinish();
		static void glFlush();
		static void glFogf(jint arg0, jfloat arg1);
		static void glFogfv(jint arg0, java::nio::FloatBuffer arg1);
		static void glFogfv(jint arg0, JFloatArray arg1, jint arg2);
		static void glFogx(jint arg0, jint arg1);
		static void glFogxv(jint arg0, java::nio::IntBuffer arg1);
		static void glFogxv(jint arg0, JIntArray arg1, jint arg2);
		static void glFrontFace(jint arg0);
		static void glFrustumf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void glFrustumx(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glGenTextures(jint arg0, java::nio::IntBuffer arg1);
		static void glGenTextures(jint arg0, JIntArray arg1, jint arg2);
		static jint glGetError();
		static void glGetIntegerv(jint arg0, java::nio::IntBuffer arg1);
		static void glGetIntegerv(jint arg0, JIntArray arg1, jint arg2);
		static JString glGetString(jint arg0);
		static void glHint(jint arg0, jint arg1);
		static void glLightModelf(jint arg0, jfloat arg1);
		static void glLightModelfv(jint arg0, java::nio::FloatBuffer arg1);
		static void glLightModelfv(jint arg0, JFloatArray arg1, jint arg2);
		static void glLightModelx(jint arg0, jint arg1);
		static void glLightModelxv(jint arg0, java::nio::IntBuffer arg1);
		static void glLightModelxv(jint arg0, JIntArray arg1, jint arg2);
		static void glLightf(jint arg0, jint arg1, jfloat arg2);
		static void glLightfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glLightfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glLightx(jint arg0, jint arg1, jint arg2);
		static void glLightxv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glLightxv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glLineWidth(jfloat arg0);
		static void glLineWidthx(jint arg0);
		static void glLoadIdentity();
		static void glLoadMatrixf(java::nio::FloatBuffer arg0);
		static void glLoadMatrixf(JFloatArray arg0, jint arg1);
		static void glLoadMatrixx(java::nio::IntBuffer arg0);
		static void glLoadMatrixx(JIntArray arg0, jint arg1);
		static void glLogicOp(jint arg0);
		static void glMaterialf(jint arg0, jint arg1, jfloat arg2);
		static void glMaterialfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glMaterialfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glMaterialx(jint arg0, jint arg1, jint arg2);
		static void glMaterialxv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glMaterialxv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glMatrixMode(jint arg0);
		static void glMultMatrixf(java::nio::FloatBuffer arg0);
		static void glMultMatrixf(JFloatArray arg0, jint arg1);
		static void glMultMatrixx(java::nio::IntBuffer arg0);
		static void glMultMatrixx(JIntArray arg0, jint arg1);
		static void glMultiTexCoord4f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void glMultiTexCoord4x(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glNormal3f(jfloat arg0, jfloat arg1, jfloat arg2);
		static void glNormal3x(jint arg0, jint arg1, jint arg2);
		static void glNormalPointer(jint arg0, jint arg1, java::nio::Buffer arg2);
		static void glOrthof(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void glOrthox(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glPixelStorei(jint arg0, jint arg1);
		static void glPointSize(jfloat arg0);
		static void glPointSizex(jint arg0);
		static void glPolygonOffset(jfloat arg0, jfloat arg1);
		static void glPolygonOffsetx(jint arg0, jint arg1);
		static void glPopMatrix();
		static void glPushMatrix();
		static void glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::nio::Buffer arg6);
		static void glRotatef(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static void glRotatex(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glSampleCoverage(jfloat arg0, jboolean arg1);
		static void glSampleCoveragex(jint arg0, jboolean arg1);
		static void glScalef(jfloat arg0, jfloat arg1, jfloat arg2);
		static void glScalex(jint arg0, jint arg1, jint arg2);
		static void glScissor(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glShadeModel(jint arg0);
		static void glStencilFunc(jint arg0, jint arg1, jint arg2);
		static void glStencilMask(jint arg0);
		static void glStencilOp(jint arg0, jint arg1, jint arg2);
		static void glTexCoordPointer(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3);
		static void glTexEnvf(jint arg0, jint arg1, jfloat arg2);
		static void glTexEnvfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glTexEnvfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glTexEnvx(jint arg0, jint arg1, jint arg2);
		static void glTexEnvxv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexEnvxv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8);
		static void glTexParameterf(jint arg0, jint arg1, jfloat arg2);
		static void glTexParameterx(jint arg0, jint arg1, jint arg2);
		static void glTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8);
		static void glTranslatef(jfloat arg0, jfloat arg1, jfloat arg2);
		static void glTranslatex(jint arg0, jint arg1, jint arg2);
		static void glVertexPointer(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3);
		static void glViewport(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::opengl

