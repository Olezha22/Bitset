#include "bitset.h"

Bitset::Bitset() {
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        bitsetArr[i] = 0;
    }
}


void Bitset::set(int index) {
    bitsetArr[index / BITS_PER_INT] |= 1u << (index % BITS_PER_INT);
}


void Bitset::print() const {
    for (int i = ARRAY_SIZE - 1; i >= 0; --i) {
            std::cout << ((bitsetArr[0] & (1u << i)) ? '1' : '0');
    }
    std::cout << std::endl;
}

bool Bitset::test(int index) const {
    return (bitsetArr[index / BITS_PER_INT] & (1u << (index % BITS_PER_INT))) != 0;
}

void Bitset::reset(int index) {
    bitsetArr[index / BITS_PER_INT] &= ~(1u << (index % BITS_PER_INT));
}

int Bitset::size() const {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        unsigned int value = bitsetArr[i];
        while (value != 0) {
            count += value & 1;
            value >>= 1;
        }
    }
    return count;
}

void Bitset::flip() {
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        bitsetArr[i] = ~bitsetArr[i];
    }
}

void Bitset::resetAll() {
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        bitsetArr[i] = 0;
    }
}