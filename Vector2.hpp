#pragma one

#include <cmath>

namespace pmath
{
    class Vector2 final
    {
    public:
        float x;
        float y;

        Vector2(float x = 0.0f, float y = 0.0f) : x(x), y(y) {}

        void operator=(const Vector2 &vec2)
        {
            this->x = vec2.x;
            this->y = vec2.y;
        }

        Vector2 operator+(const Vector2 &vec2)
        {
            return Vector2(this->x + vec2.x, this->y + vec2.y);
        }

        Vector2 operator-(const Vector2 &vec2)
        {
            return Vector2(this->x - vec2.x, this->y - vec2.y);
        }

        Vector2 operator*(const Vector2 &vec2)
        {
            return Vector2(this->x * vec2.x, this->y * vec2.y);
        }

        Vector2 operator/(const Vector2 &vec2)
        {
            return Vector2(this->x / vec2.x, this->y / vec2.y);
        }

        void operator+=(const Vector2 &vec2)
        {
            this->x += vec2.x;
            this->y += vec2.y;
        }

        void operator-=(const Vector2 &vec2)
        {
            this->x -= vec2.x;
            this->y -= vec2.y;
        }

        void operator*=(const Vector2 &vec2)
        {
            this->x *= vec2.x;
            this->y *= vec2.y;
        }

        void operator/=(const Vector2 &vec2)
        {
            this->x /= vec2.x;
            this->y /= vec2.y;
        }

        /// @brief находит длину вектора
        /// @param vec2 вектор
        /// @return длина
        inline static float length(const Vector2 &vec2)
        {
            return sqrtf(powf(vec2.x, 2) + powf(vec2.y, 2));
        }

        inline float length() const
        {
            return sqrtf(powf(this->x, 2) + powf(this->y, 2));
        }

        inline float dot(const Vector2 &vec2) const
        {
            return this->x * vec2.x + this->y * vec2.y;
        }

        Vector2 normalize()
        {
            const float LENGTH = this->length();
            return Vector2(
                this->x / LENGTH,
                this->y / LENGTH);
        }

        void normal()
        {
            const float LENGTH = this->length();
            this->x /= LENGTH;
            this->y /= LENGTH;
        }

        static Vector2 normalize(const Vector2 &vec2)
        {
            const float LENGTH = Vector2::length(vec2);
            return Vector2(
                vec2.x / LENGTH,
                vec2.y / LENGTH);
        }
    };
}