#pragma once
#include "CellState.h"

class AliveState : public CellState {
    AliveState() = default;
public:
    AliveState(const AliveState&) = delete;
    AliveState& operator=(const AliveState&) = delete;

    static const AliveState& instance() {
        static const AliveState inst;
        return inst;
    }
    bool isAlive() const override { return true; }
};