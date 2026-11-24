#pragma once
#include "CellState.h"

class LockedState : public CellState {          // héritage
    const CellState& stateLocked;                   // agrégation "fige", multiplicité 1
public:
    explicit LockedState(const CellState& state) : stateLocked(state) {}

    bool isAlive() const override { return stateLocked.isAlive(); } // délégation
    bool isLocked() const override { return true; }
};