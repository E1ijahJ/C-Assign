class Point3D{
  public:
  double x,y,z;
  Point3D(double x, double y, double z) : x(x), y(y), z(z) {}
  Point3D operator+(const Point3D& other) const {
    return Point3D(x + other.x, y +other.y, z +other.z);
  }
};