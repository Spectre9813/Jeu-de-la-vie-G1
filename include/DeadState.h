#pragma once
#include "CellState.h"

class DeadState : public CellState {
    DeadState() = default;
public:
    DeadState(const DeadState&) = delete;
    DeadState& operator=(const DeadState&) = delete;

    static const DeadState& instance() {
        static const DeadState inst;
        return inst;
    }
    bool isAlive() const override { return false; }
};