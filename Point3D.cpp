/// @brief this is a class object that takes 3 doubles in x y and z and then adds the other x y and z together and reutrns the sum of the xs the ys and the zs
class Point3D{
  public:
  double x,y,z;
  Point3D(double x, double y, double z) : x(x), y(y), z(z) {}
  Point3D operator+(const Point3D& other) const {
    return Point3D(x + other.x, y +other.y, z +other.z);
  }
};