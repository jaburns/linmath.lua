#pragma once

#include <cglm/cglm.h>
#include <lua.h>

extern void lml_load_types(lua_State *L);

extern void lml_push_vec2(lua_State *L, vec2 v);
extern void lml_get_vec2(lua_State *L, int stack_index, vec2 v);
extern void lml_push_vec3(lua_State *L, vec3 v);
extern void lml_get_vec3(lua_State *L, int stack_index, vec3 v);
extern void lml_push_vec4(lua_State *L, vec4 v);
extern void lml_get_vec4(lua_State *L, int stack_index, vec4 v);
extern void lml_push_versor(lua_State *L, versor v);
extern void lml_get_versor(lua_State *L, int stack_index, versor v);
extern void lml_push_mat4(lua_State *L, mat4 m);
extern void lml_get_mat4(lua_State *L, int stack_index, mat4 m);