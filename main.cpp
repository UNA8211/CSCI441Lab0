#include <iostream>
#include <string>

class Vector3 {
public:
    float x;
    float y;
    float z;

    // Constructor
    Vector3(float xx, float yy, float zz) : x(xx), y(yy), z(zz) {
        // nothing to do here as we've already initialized x, y, and z above
        std::cout << "in Vector3 constructor" << std::endl;
    }

    // Destructor - called when an object goes out of scope or is destroyed
    ~Vector3() {
        // this is where you would release resources such as memory or file descriptors
        // in this case we don't need to do anything
        std::cout << "in Vector3 destructor" << std::endl;
    }
};

Vector3 operator+(Vector3 v, Vector3 v2) {
  return Vector3(v.x + v2.x, v.y + v2.y, v.z + v2.z);
}

std::ostream& operator<<(std::ostream& stream, const Vector3& v) {
    stream << "x: " << v.x << ", y: " << v.y << ", z: " << v.z;
    return stream;
}

Vector3 add(Vector3 v, Vector3 v2) {
  return Vector3(v.x + v2.x, v.y + v2.y, v.z + v2.z);
}

int main(int argc, char** argv) {
  std::cout << "hello world " << argv[0] << " " << 1234 << " " << std::endl;

  std::string name;
  std::cin >> name;

  std::cout << "Hello " << name << std::endl;

  Vector3 a(1,2,3);
  Vector3 b(4,5,6);
  Vector3 c = add(a,b);

  std::cout << "x: " << c.x << ", y: " << c.y << ", z: " << c.z << std::endl;
  std::cout << a + b << std::endl;
}
