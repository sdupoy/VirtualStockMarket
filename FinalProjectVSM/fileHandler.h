#include <string>

#pragma once

bool isInFile(std::string pin);

float getBalancePin(std::string pin);

void recordTransaction(std::string transaction);

void debitBalance(std::string pin, float amount);

void creditBalance(std::string pin, float amount);