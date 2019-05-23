#include "sides.h"

/* Member functions of class Side */

/* Constructors */
Side::Side(enum e_side side) {
  side_  = side;
}

Side::Side() {
  side_ = NUM_SIDES;
}

Side::Side(size_t side) { 
  set_side(side); 
}

/* Public Accessors */
enum e_side Side::get_side() const { 
  return side_; 
} 

enum e_side Side::get_opposite() const {
  switch (side_) {
  case TOP:
    return BOTTOM; 
  case RIGHT:
    return LEFT;
  case BOTTOM:
    return TOP;
  case LEFT:
    return RIGHT;
  default:
    return NUM_SIDES;
  }
}

enum e_side Side::get_rotate_clockwise() const {
  switch (side_) {
  case TOP:
    return RIGHT; 
  case RIGHT:
    return BOTTOM;
  case BOTTOM:
    return LEFT;
  case LEFT:
    return TOP;
  default:
    return NUM_SIDES;
  }
}  

enum e_side Side::get_rotate_counterclockwise() const {
  switch (side_) {
  case TOP:
    return LEFT;
  case RIGHT:
    return TOP;
  case BOTTOM:
    return RIGHT; 
  case LEFT:
    return BOTTOM;
  default:
    return NUM_SIDES;
  }
} 

bool Side::validate() const {
  if (NUM_SIDES == side_) {
    return false;
  }
  return true;
}

size_t Side::to_size_t() const {
  switch (side_) {
  case TOP:
    return 0; 
  case RIGHT:
    return 1;
  case BOTTOM:
    return 2;
  case LEFT:
    return 3;
  default:
    return 4;
  }
}

/* Public Mutators */
void Side::set_side(size_t side) { 
  switch (side) {
  case 0:
    side_ = TOP;
    return; 
  case 1:
    side_ = RIGHT;
    return; 
  case 2:
    side_ = BOTTOM;
    return; 
  case 3:
    side_ = LEFT;
    return; 
  default:
    side_ = NUM_SIDES;
    return; 
  }
}

void Side::set_side(enum e_side side) { 
  side_ = side; 
  return;
}

void Side::set_opposite() { 
  side_ = get_opposite(); 
  return;
}
    
void Side::rotate_clockwise() {
  side_ = get_rotate_clockwise(); 
  return;
}  

void Side::rotate_counterclockwise() {
  side_ = get_rotate_counterclockwise(); 
  return;
}  



