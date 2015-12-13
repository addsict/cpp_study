#include <iostream>
#include <cassert>

struct IntArray {
  int *elems;
  size_t num_elems;
};

void IA_init(IntArray *object, size_t size) {
  object->elems = (int *)malloc(size * sizeof(int));
  object->num_elems = size;
}

void IA_cleanup(IntArray *object) {
  object->num_elems = 0;
  free(object->elems);
}

int IA_get_size(IntArray *object) {
  return object->num_elems;
}

void IA_set_elem(IntArray *object, int index, int elem) {
  assert(index < object->num_elems);
  object->elems[index] = elem;
}

int IA_get_elem(IntArray *object, int index) {
  assert(index < object->num_elems);
  return object->elems[index];
}

void IA_print_elem(IntArray *object) {
  for (int i = 0; i < object->num_elems; i++) {
    std::cout << IA_get_elem(object, i) << std::endl;
  }
}

int main() {
  IntArray powersOf2;
  IA_init(&powersOf2, 10);
  IA_set_elem(&powersOf2, 0, 100);
  IA_set_elem(&powersOf2, 1, 200);
  IA_set_elem(&powersOf2, 2, 300);
  IA_print_elem(&powersOf2);
  IA_cleanup(&powersOf2);
}
