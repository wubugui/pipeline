// Copyright NVIDIA Corporation 2012
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


#include <dp/sg/ui/glut/Widget.h>
#include <dp/sg/ui/SceniXWidget.h>
#include <dp/util/Timer.h>

#pragma once

namespace dp
{
  namespace sg
  {
    namespace ui
    {
      namespace glut
      {

        class SceneRendererWidget : public Widget,  public SceniXSceneRendererWidget
        {
        public:
          DP_SG_UI_GLUT_API SceneRendererWidget();
          DP_SG_UI_GLUT_API virtual ~SceneRendererWidget();

          DP_SG_UI_GLUT_API virtual void triggerRepaint();

          REFLECTION_INFO_API( DP_SG_UI_GLUT_API, SceneRendererWidget );

        protected:
          DP_SG_UI_GLUT_API virtual void paint();
          DP_SG_UI_GLUT_API virtual void cleanup();

          DP_SG_UI_GLUT_API virtual void onHIDEvent( dp::util::PropertyId propertyId );
          DP_SG_UI_GLUT_API virtual void onManipulatorChanged( Manipulator *manipulator );

        private:
          dp::util::Timer m_updateTimer;
        };

      }
    }
  }
}