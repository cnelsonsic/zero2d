#ifndef CAMERA_H
#define CAMERA_H

#include "Matrix4x4.h"
#include "Vectors.h"

namespace CGE
{
    class Camera
    {
        public:
            Camera();
            ~Camera();

            inline const mat4f& matrix() { return mMatrix; }
            void update();
            void setDistance(float inDistance);
            void changeDistance(float inOffset);
            void setRotation(float inRotation);
            void changeRotation(float inOffset);
            void setAngle(float inAngle);
            void changeAngle(float inOffset);
            void setPosition(float inX, float inY, float inZ);

        private:
            mat4f mMatrix;
            vec3f mPosition;
            float mDistance;
            float mRotation;
            float mAngle;
    };
}

#endif
