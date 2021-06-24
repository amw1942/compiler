#ifndef _COMPILER_IR_H_
#define _COMPILER_IR_H_

#include <vector>

#include "common.h"
#include "opcode.h"
#include "operand.h"
#include "meta.h"

class Inst {
public:
  Inst();

private:
  Opcode opcode_;
  std::vector<Opnd> opnds_;
  Meta meta_;
};

#endif
