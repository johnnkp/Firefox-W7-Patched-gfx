// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Context_gles_3_1_autogen.h: Creates a macro for interfaces in Context.

#ifndef ANGLE_CONTEXT_GLES_3_1_AUTOGEN_H_
#define ANGLE_CONTEXT_GLES_3_1_AUTOGEN_H_

#define ANGLE_GLES_3_1_CONTEXT_API                                                                 \
    void activeShaderProgram(ProgramPipelineID pipelinePacked, ShaderProgramID programPacked);     \
    void bindImageTexture(GLuint unit, TextureID texturePacked, GLint level, GLboolean layered,    \
                          GLint layer, GLenum access, GLenum format);                              \
    void bindProgramPipeline(ProgramPipelineID pipelinePacked);                                    \
    void bindVertexBuffer(GLuint bindingindex, BufferID bufferPacked, GLintptr offset,             \
                          GLsizei stride);                                                         \
    GLuint createShaderProgramv(ShaderType typePacked, GLsizei count,                              \
                                const GLchar *const *strings);                                     \
    void deleteProgramPipelines(GLsizei n, const ProgramPipelineID *pipelinesPacked);              \
    void dispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);           \
    void dispatchComputeIndirect(GLintptr indirect);                                               \
    void drawArraysIndirect(PrimitiveMode modePacked, const void *indirect);                       \
    void drawElementsIndirect(PrimitiveMode modePacked, DrawElementsType typePacked,               \
                              const void *indirect);                                               \
    void framebufferParameteri(GLenum target, GLenum pname, GLint param);                          \
    void genProgramPipelines(GLsizei n, ProgramPipelineID *pipelinesPacked);                       \
    void getBooleani_v(GLenum target, GLuint index, GLboolean *data);                              \
    void getFramebufferParameteriv(GLenum target, GLenum pname, GLint *params);                    \
    void getMultisamplefv(GLenum pname, GLuint index, GLfloat *val);                               \
    void getProgramInterfaceiv(ShaderProgramID programPacked, GLenum programInterface,             \
                               GLenum pname, GLint *params);                                       \
    void getProgramPipelineInfoLog(ProgramPipelineID pipelinePacked, GLsizei bufSize,              \
                                   GLsizei *length, GLchar *infoLog);                              \
    void getProgramPipelineiv(ProgramPipelineID pipelinePacked, GLenum pname, GLint *params);      \
    GLuint getProgramResourceIndex(ShaderProgramID programPacked, GLenum programInterface,         \
                                   const GLchar *name);                                            \
    GLint getProgramResourceLocation(ShaderProgramID programPacked, GLenum programInterface,       \
                                     const GLchar *name);                                          \
    void getProgramResourceName(ShaderProgramID programPacked, GLenum programInterface,            \
                                GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);     \
    void getProgramResourceiv(ShaderProgramID programPacked, GLenum programInterface,              \
                              GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, \
                              GLsizei *length, GLint *params);                                     \
    void getTexLevelParameterfv(TextureTarget targetPacked, GLint level, GLenum pname,             \
                                GLfloat *params);                                                  \
    void getTexLevelParameteriv(TextureTarget targetPacked, GLint level, GLenum pname,             \
                                GLint *params);                                                    \
    GLboolean isProgramPipeline(ProgramPipelineID pipelinePacked) const;                           \
    void memoryBarrier(GLbitfield barriers);                                                       \
    void memoryBarrierByRegion(GLbitfield barriers);                                               \
    void programUniform1f(ShaderProgramID programPacked, UniformLocation locationPacked,           \
                          GLfloat v0);                                                             \
    void programUniform1fv(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLsizei count, const GLfloat *value);                                   \
    void programUniform1i(ShaderProgramID programPacked, UniformLocation locationPacked,           \
                          GLint v0);                                                               \
    void programUniform1iv(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLsizei count, const GLint *value);                                     \
    void programUniform1ui(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLuint v0);                                                             \
    void programUniform1uiv(ShaderProgramID programPacked, UniformLocation locationPacked,         \
                            GLsizei count, const GLuint *value);                                   \
    void programUniform2f(ShaderProgramID programPacked, UniformLocation locationPacked,           \
                          GLfloat v0, GLfloat v1);                                                 \
    void programUniform2fv(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLsizei count, const GLfloat *value);                                   \
    void programUniform2i(ShaderProgramID programPacked, UniformLocation locationPacked, GLint v0, \
                          GLint v1);                                                               \
    void programUniform2iv(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLsizei count, const GLint *value);                                     \
    void programUniform2ui(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLuint v0, GLuint v1);                                                  \
    void programUniform2uiv(ShaderProgramID programPacked, UniformLocation locationPacked,         \
                            GLsizei count, const GLuint *value);                                   \
    void programUniform3f(ShaderProgramID programPacked, UniformLocation locationPacked,           \
                          GLfloat v0, GLfloat v1, GLfloat v2);                                     \
    void programUniform3fv(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLsizei count, const GLfloat *value);                                   \
    void programUniform3i(ShaderProgramID programPacked, UniformLocation locationPacked, GLint v0, \
                          GLint v1, GLint v2);                                                     \
    void programUniform3iv(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLsizei count, const GLint *value);                                     \
    void programUniform3ui(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLuint v0, GLuint v1, GLuint v2);                                       \
    void programUniform3uiv(ShaderProgramID programPacked, UniformLocation locationPacked,         \
                            GLsizei count, const GLuint *value);                                   \
    void programUniform4f(ShaderProgramID programPacked, UniformLocation locationPacked,           \
                          GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);                         \
    void programUniform4fv(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLsizei count, const GLfloat *value);                                   \
    void programUniform4i(ShaderProgramID programPacked, UniformLocation locationPacked, GLint v0, \
                          GLint v1, GLint v2, GLint v3);                                           \
    void programUniform4iv(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLsizei count, const GLint *value);                                     \
    void programUniform4ui(ShaderProgramID programPacked, UniformLocation locationPacked,          \
                           GLuint v0, GLuint v1, GLuint v2, GLuint v3);                            \
    void programUniform4uiv(ShaderProgramID programPacked, UniformLocation locationPacked,         \
                            GLsizei count, const GLuint *value);                                   \
    void programUniformMatrix2fv(ShaderProgramID programPacked, UniformLocation locationPacked,    \
                                 GLsizei count, GLboolean transpose, const GLfloat *value);        \
    void programUniformMatrix2x3fv(ShaderProgramID programPacked, UniformLocation locationPacked,  \
                                   GLsizei count, GLboolean transpose, const GLfloat *value);      \
    void programUniformMatrix2x4fv(ShaderProgramID programPacked, UniformLocation locationPacked,  \
                                   GLsizei count, GLboolean transpose, const GLfloat *value);      \
    void programUniformMatrix3fv(ShaderProgramID programPacked, UniformLocation locationPacked,    \
                                 GLsizei count, GLboolean transpose, const GLfloat *value);        \
    void programUniformMatrix3x2fv(ShaderProgramID programPacked, UniformLocation locationPacked,  \
                                   GLsizei count, GLboolean transpose, const GLfloat *value);      \
    void programUniformMatrix3x4fv(ShaderProgramID programPacked, UniformLocation locationPacked,  \
                                   GLsizei count, GLboolean transpose, const GLfloat *value);      \
    void programUniformMatrix4fv(ShaderProgramID programPacked, UniformLocation locationPacked,    \
                                 GLsizei count, GLboolean transpose, const GLfloat *value);        \
    void programUniformMatrix4x2fv(ShaderProgramID programPacked, UniformLocation locationPacked,  \
                                   GLsizei count, GLboolean transpose, const GLfloat *value);      \
    void programUniformMatrix4x3fv(ShaderProgramID programPacked, UniformLocation locationPacked,  \
                                   GLsizei count, GLboolean transpose, const GLfloat *value);      \
    void sampleMaski(GLuint maskNumber, GLbitfield mask);                                          \
    void texStorage2DMultisample(TextureType targetPacked, GLsizei samples, GLenum internalformat, \
                                 GLsizei width, GLsizei height, GLboolean fixedsamplelocations);   \
    void useProgramStages(ProgramPipelineID pipelinePacked, GLbitfield stages,                     \
                          ShaderProgramID programPacked);                                          \
    void validateProgramPipeline(ProgramPipelineID pipelinePacked);                                \
    void vertexAttribBinding(GLuint attribindex, GLuint bindingindex);                             \
    void vertexAttribFormat(GLuint attribindex, GLint size, VertexAttribType typePacked,           \
                            GLboolean normalized, GLuint relativeoffset);                          \
    void vertexAttribIFormat(GLuint attribindex, GLint size, VertexAttribType typePacked,          \
                             GLuint relativeoffset);                                               \
    void vertexBindingDivisor(GLuint bindingindex, GLuint divisor);

#endif  // ANGLE_CONTEXT_API_3_1_AUTOGEN_H_
