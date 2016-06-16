/****************************************************************************
Copyright (c) 2008-2010 Ricardo Quesada
Copyright (c) 2010-2012 cocos2d-x.org
Copyright (c) 2011      Zynga Inc.
Copyright (c) 2013-2014 Chukong Technologies Inc.

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#pragma once

#include <string>
#include <vector>
#include "renderer/CCTrianglesCommand.h"

NS_CC_BEGIN

/**
 * @addtogroup _2d
 * @{
 */

/**
 * PolygonInfo is an object holding the required data to display Sprites.
 * It can be a simple as a triangle, or as complex as a whole 3D mesh
 */
class CC_DLL PolygonInfo
{
public:
    /// @name Creators
    /// @{
    /**
     * Creates an empty Polygon info
     * @memberof PolygonInfo
     * @return PolygonInfo object
     */
    PolygonInfo();

    /**
     * Create an polygoninfo from the data of another Polygoninfo
     * @param other     another PolygonInfo to be copied
     * @return duplicate of the other PolygonInfo
     */
    PolygonInfo(const PolygonInfo& other);
    //  end of creators group
    /// @}

    /**
     * Copy the member of the other PolygonInfo
     * @param other     another PolygonInfo to be copied
     */
    PolygonInfo& operator= (const PolygonInfo &other);
    ~PolygonInfo();

    /**
     * set the data to be a pointer to a quad
     * the member verts will not be released when this PolygonInfo destructs
     * as the verts memory are managed by other objects
     * @param quad  a pointer to the V3F_C4B_T2F_Quad object
     */
    void setQuad(V3F_C4B_T2F_Quad *quad);

    /**
     * get vertex count
     * @return number of vertices
     */
    const unsigned int getVertCount() const;

    /**
     * get triangles count
     * @return number of triangles
     */
    const unsigned int getTriaglesCount() const;

    /**
     * get sum of all triangle area size
     * @return sum of all triangle area size
     */
    const float getArea() const;

    Rect rect;
    std::string filename;
    TrianglesCommand::Triangles triangles;

protected:
    bool isVertsOwner;

private:
    void releaseVertsAndIndices();
};

NS_CC_END
