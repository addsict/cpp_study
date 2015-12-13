#include <iostream>
#include <cassert>

class IntArray {
  public:
    IntArray(int size);
    ~IntArray();
    int getSize();
    void setElem(int index, int elem);
    int getElem(int index);
    void printElems();

  private:
    int *elems;
    size_t numElems;
};

IntArray::IntArray(int size) {
  this->elems = (int *)malloc(size * sizeof(int));
  this->numElems = size;
}

IntArray::~IntArray() {
  this->numElems= 0;
  free(this->elems);
}

int IntArray::getSize() {
  return this->numElems;
}

void IntArray::setElem(int index, int elem) {
  assert(index < this->numElems);
  this->elems[index] = elem;
}

int IntArray::getElem(int index) {
  assert(index < this->numElems);
  return this->elems[index];
}

void IntArray::printElems() {
  for (int i = 0; i < this->getSize(); i++) {
    std::cout << this->getElem(i) << std::endl;
  }
}

int main() {
  IntArray *powersOf2 = new IntArray(10);
  powersOf2->setElem(0, 100);
  powersOf2->setElem(1, 200);
  powersOf2->setElem(2, 300);
  powersOf2->printElems();
}
