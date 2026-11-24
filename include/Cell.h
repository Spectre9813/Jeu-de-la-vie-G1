#pragma once
#include "CellState.h"

class Cell {
private:
    const CellState* state;
public:
    explicit Cell(const CellState* state) : state(state) {};
    const CellState& getEtat() const { return *state; }
    void setEtat(const CellState& e) { if (!isLocked()) state = &e; }
    bool isAlive() const { return state->isAlive(); }
    bool isLocked() const { return state->isLocked(); }
};