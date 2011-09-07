#ifndef text_renderer_h
#define text_renderer_h

#include "font.h"
#include "vector.h"

static int text_align_left = 0;
static int text_align_center = 1;
static int text_align_right = 2;

/*
  After editing any properties of a render_text in this struct, please call the update function
  This will re-draw the quads needed for rendering the updated text.
*/

typedef struct {
  
  /* Don't change manually */
  
  char* string;
  int buffersize;
  
  float* vert_positions;
  float* vert_texcoords;
  
  /* Do change manually, then run update_properties function */
  
  font* font;  
  
  vector2 position;
  vector2 scale;
  vector4 color;
  
  int alignment;
  
  float line_spacing;
  float char_spacing;
  float rotation;
  
} render_text;

render_text* render_text_new(char* string, int buffersize, font* text_font);

void render_text_delete(render_text* rt);
void render_text_update_buffer(render_text* rt, int buffersize);
void render_text_update_string(render_text* rt, char* string);
void render_text_update(render_text* rt);
void render_text_render(render_text* rt);

#endif