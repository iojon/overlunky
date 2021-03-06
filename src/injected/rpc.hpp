#include <cstdint>
#include <vector>

uint32_t spawn_entity(size_t id, float x, float y, bool s, float vx, float vy, bool snap);
void spawn_door(float x, float y, uint8_t w, uint8_t l, uint8_t f, uint8_t t);
void spawn_backdoor(float x, float y);
void teleport(float x, float y, bool s, float vx, float vy, bool snap);
void godmode(bool g);
void zoom(float level);
void list_items();
uint32_t get_entity_at(float x, float y, bool s, float r, uint32_t mask);
void move_entity(uint32_t id, float x, float y, bool s, float vx, float vy, bool snap);
uint32_t get_entity_flags(uint32_t id);
void set_entity_flags(uint32_t id, uint32_t flags);
void set_hud_flags(uint8_t flags);
uint8_t get_hud_flags();
void set_pause(uint8_t pause);
void player_status();
Entity *get_entity_ptr(uint32_t id);
int32_t get_entity_type(uint32_t id);
size_t get_state_ptr();
void get_players();

