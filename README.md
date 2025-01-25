This repository demonstrates a common, yet easily overlooked, issue with std::vector<bool> in C++. The bug arises from its non-standard implementation as a bitset, where indexing with [] does not always return a reference, leading to unexpected behavior when modifying elements. The solution showcases using iterators or at() for guaranteed correct modification.