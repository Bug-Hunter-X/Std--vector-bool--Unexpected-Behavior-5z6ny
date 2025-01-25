std::vector<bool> is a special case in C++ that doesn't behave exactly like other standard containers.  It's often implemented as a bitset for memory efficiency, leading to some surprising behavior. For example, accessing elements using `[]` might not return a reference, but rather a copy of the boolean value. This can lead to unexpected consequences if you try to modify elements through the returned value.