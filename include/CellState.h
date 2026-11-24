#pragma once

class CellState {
public:
    virtual ~CellState() = default;
    virtual bool isAlive() const = 0;
    virtual bool isLocked() const { return false; };
};