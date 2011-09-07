#ifndef painting_renderer_h
#define painting_renderer_h

#include "camera.h"
#include "light.h"
#include "texture.h"
#include "painting_renderable.h"

void painting_renderer_init();
void painting_renderer_finish();

void painting_renderer_set_camera(camera* c);
void painting_renderer_set_light(light* l);
void painting_renderer_set_shadow_texture(texture* t);
void painting_renderer_setup_camera();

void painting_renderer_begin_render();
void painting_renderer_end_render();

void painting_renderer_begin_painting();
void painting_renderer_end_painting();

void painting_renderer_render_renderable(painting_renderable* pr);
void painting_renderer_paint_renderable(painting_renderable* pr);

void painting_renderer_use_material(material* mat);

#endif