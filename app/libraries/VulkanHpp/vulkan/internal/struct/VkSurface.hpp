// Copyright (c) 2015-2019 The Khronos Group Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// ---- Exceptions to the Apache 2.0 License: ----
// 
// As an exception, if you use this Software to generate code and portions of
// this Software are embedded into the generated code as a result, you may
// redistribute such product without providing attribution as would otherwise
// be required by Sections 4(a), 4(b) and 4(d) of the License.
// 
// In addition, if you combine or link code generated by this Software with
// software that is licensed under the GPLv2 or the LGPL v2.0 or 2.1
// ("`Combined Software`") and if a court of competent jurisdiction determines
// that the patent provision (Section 3), the indemnity provision (Section 9)
// or other Section of the License conflicts with the conditions of the
// applicable GPL or LGPL license, you may retroactively and prospectively
// choose to deem waived or otherwise exclude such Section(s) of the License,
// but only in their entirety and only with respect to the Combined Software.
//     

// This header is generated from the Khronos Vulkan XML API Registry.

#pragma once

#include "../handles.hpp"
#include "VkAcquire.hpp"
#include "VkAcceleration.hpp"
#include "VkApplication.hpp"
#include "VkInitialize.hpp"
#include "VkAllocation.hpp"
#include "VkExternal.hpp"
#include "VkBind.hpp"
#include "VkObject.hpp"
#include "VkCooperative.hpp"
#include "VkAndroid.hpp"
#include "VkImport.hpp"
#include "VkImage.hpp"
#include "VkDescriptor.hpp"
#include "VkBase.hpp"
#include "VkAttachment.hpp"
#include "VkBuffer.hpp"
#include "VkFramebuffer.hpp"
#include "VkCalibrated.hpp"
#include "VkDevice.hpp"
#include "VkSubresource.hpp"
#include "VkCheckpoint.hpp"
#include "VkConformance.hpp"
#include "VkClear.hpp"
#include "VkStream.hpp"
#include "VkCmd.hpp"
#include "VkCoarse.hpp"
#include "VkExtension.hpp"
#include "VkCommand.hpp"
#include "VkFormat.hpp"
#include "VkMetal.hpp"
#include "VkComponent.hpp"
#include "VkCopy.hpp"
#include "VkCompute.hpp"
#include "VkPast.hpp"
#include "VkConditional.hpp"
#include "VkMapped.hpp"
#include "VkD3D.hpp"
#include "VkDebug.hpp"
#include "VkDedicated.hpp"
#include "VkFence.hpp"
#include "VkDispatch.hpp"
#include "VkPipeline.hpp"
#include "VkDraw.hpp"
#include "VkDisplay.hpp"
#include "VkDrm.hpp"
#include "VkEvent.hpp"
#include "VkExport.hpp"
#include "VkRay.hpp"
#include "VkExtent.hpp"
#include "VkPerformance.hpp"
#include "VkFilter.hpp"
#include "VkRender.hpp"
#include "VkGeometry.hpp"
#include "VkGraphics.hpp"
#include "VkHdr.hpp"
#include "VkHeadless.hpp"
#include "VkMultisample.hpp"
#include "VkI.hpp"
#include "VkIndirect.hpp"
#include "VkInput.hpp"
#include "VkOffset.hpp"
#include "VkMemory.hpp"
#include "VkInstance.hpp"
#include "VkLayer.hpp"
#include "VkMac.hpp"
#include "VkPhysical.hpp"
#include "VkPresent.hpp"
#include "VkProtected.hpp"
#include "VkPush.hpp"
#include "VkQuery.hpp"
#include "VkQueue.hpp"
#include "VkRect.hpp"
#include "VkRefresh.hpp"
#include "VkSample.hpp"
#include "VkSampler.hpp"
#include "VkSemaphore.hpp"
#include "VkShader.hpp"
#include "VkShading.hpp"
#include "VkShared.hpp"
#include "VkSparse.hpp"
#include "VkSpecialization.hpp"
#include "VkStencil.hpp"
#include "VkSubmit.hpp"
#include "VkSubpass.hpp"
#include "VkSurface.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct SurfaceCapabilities2EXT
  {
    VULKAN_HPP_CONSTEXPR SurfaceCapabilities2EXT( uint32_t minImageCount_ = {},
                                                  uint32_t maxImageCount_ = {},
                                                  VULKAN_HPP_NAMESPACE::Extent2D currentExtent_ = {},
                                                  VULKAN_HPP_NAMESPACE::Extent2D minImageExtent_ = {},
                                                  VULKAN_HPP_NAMESPACE::Extent2D maxImageExtent_ = {},
                                                  uint32_t maxImageArrayLayers_ = {},
                                                  VULKAN_HPP_NAMESPACE::SurfaceTransformFlagsKHR supportedTransforms_ = {},
                                                  VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR currentTransform_ = VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR::eIdentity,
                                                  VULKAN_HPP_NAMESPACE::CompositeAlphaFlagsKHR supportedCompositeAlpha_ = {},
                                                  VULKAN_HPP_NAMESPACE::ImageUsageFlags supportedUsageFlags_ = {},
                                                  VULKAN_HPP_NAMESPACE::SurfaceCounterFlagsEXT supportedSurfaceCounters_ = {} ) VULKAN_HPP_NOEXCEPT
      : minImageCount( minImageCount_ )
      , maxImageCount( maxImageCount_ )
      , currentExtent( currentExtent_ )
      , minImageExtent( minImageExtent_ )
      , maxImageExtent( maxImageExtent_ )
      , maxImageArrayLayers( maxImageArrayLayers_ )
      , supportedTransforms( supportedTransforms_ )
      , currentTransform( currentTransform_ )
      , supportedCompositeAlpha( supportedCompositeAlpha_ )
      , supportedUsageFlags( supportedUsageFlags_ )
      , supportedSurfaceCounters( supportedSurfaceCounters_ )
    {}

    VULKAN_HPP_CONSTEXPR SurfaceCapabilities2EXT( SurfaceCapabilities2EXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , minImageCount( rhs.minImageCount )
      , maxImageCount( rhs.maxImageCount )
      , currentExtent( rhs.currentExtent )
      , minImageExtent( rhs.minImageExtent )
      , maxImageExtent( rhs.maxImageExtent )
      , maxImageArrayLayers( rhs.maxImageArrayLayers )
      , supportedTransforms( rhs.supportedTransforms )
      , currentTransform( rhs.currentTransform )
      , supportedCompositeAlpha( rhs.supportedCompositeAlpha )
      , supportedUsageFlags( rhs.supportedUsageFlags )
      , supportedSurfaceCounters( rhs.supportedSurfaceCounters )
    {}

    SurfaceCapabilities2EXT & operator=( SurfaceCapabilities2EXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SurfaceCapabilities2EXT ) - offsetof( SurfaceCapabilities2EXT, pNext ) );
      return *this;
    }

    SurfaceCapabilities2EXT( VkSurfaceCapabilities2EXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SurfaceCapabilities2EXT& operator=( VkSurfaceCapabilities2EXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SurfaceCapabilities2EXT const *>(&rhs);
      return *this;
    }

    operator VkSurfaceCapabilities2EXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSurfaceCapabilities2EXT*>( this );
    }

    operator VkSurfaceCapabilities2EXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSurfaceCapabilities2EXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SurfaceCapabilities2EXT const& ) const = default;
#else
    bool operator==( SurfaceCapabilities2EXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( minImageCount == rhs.minImageCount )
          && ( maxImageCount == rhs.maxImageCount )
          && ( currentExtent == rhs.currentExtent )
          && ( minImageExtent == rhs.minImageExtent )
          && ( maxImageExtent == rhs.maxImageExtent )
          && ( maxImageArrayLayers == rhs.maxImageArrayLayers )
          && ( supportedTransforms == rhs.supportedTransforms )
          && ( currentTransform == rhs.currentTransform )
          && ( supportedCompositeAlpha == rhs.supportedCompositeAlpha )
          && ( supportedUsageFlags == rhs.supportedUsageFlags )
          && ( supportedSurfaceCounters == rhs.supportedSurfaceCounters );
    }

    bool operator!=( SurfaceCapabilities2EXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSurfaceCapabilities2EXT;
    void* pNext = {};
    uint32_t minImageCount = {};
    uint32_t maxImageCount = {};
    VULKAN_HPP_NAMESPACE::Extent2D currentExtent = {};
    VULKAN_HPP_NAMESPACE::Extent2D minImageExtent = {};
    VULKAN_HPP_NAMESPACE::Extent2D maxImageExtent = {};
    uint32_t maxImageArrayLayers = {};
    VULKAN_HPP_NAMESPACE::SurfaceTransformFlagsKHR supportedTransforms = {};
    VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR currentTransform = VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR::eIdentity;
    VULKAN_HPP_NAMESPACE::CompositeAlphaFlagsKHR supportedCompositeAlpha = {};
    VULKAN_HPP_NAMESPACE::ImageUsageFlags supportedUsageFlags = {};
    VULKAN_HPP_NAMESPACE::SurfaceCounterFlagsEXT supportedSurfaceCounters = {};
  };
  static_assert( sizeof( SurfaceCapabilities2EXT ) == sizeof( VkSurfaceCapabilities2EXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SurfaceCapabilities2EXT>::value, "struct wrapper is not a standard layout!" );

  struct SurfaceCapabilitiesKHR
  {
    VULKAN_HPP_CONSTEXPR SurfaceCapabilitiesKHR( uint32_t minImageCount_ = {},
                                                 uint32_t maxImageCount_ = {},
                                                 VULKAN_HPP_NAMESPACE::Extent2D currentExtent_ = {},
                                                 VULKAN_HPP_NAMESPACE::Extent2D minImageExtent_ = {},
                                                 VULKAN_HPP_NAMESPACE::Extent2D maxImageExtent_ = {},
                                                 uint32_t maxImageArrayLayers_ = {},
                                                 VULKAN_HPP_NAMESPACE::SurfaceTransformFlagsKHR supportedTransforms_ = {},
                                                 VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR currentTransform_ = VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR::eIdentity,
                                                 VULKAN_HPP_NAMESPACE::CompositeAlphaFlagsKHR supportedCompositeAlpha_ = {},
                                                 VULKAN_HPP_NAMESPACE::ImageUsageFlags supportedUsageFlags_ = {} ) VULKAN_HPP_NOEXCEPT
      : minImageCount( minImageCount_ )
      , maxImageCount( maxImageCount_ )
      , currentExtent( currentExtent_ )
      , minImageExtent( minImageExtent_ )
      , maxImageExtent( maxImageExtent_ )
      , maxImageArrayLayers( maxImageArrayLayers_ )
      , supportedTransforms( supportedTransforms_ )
      , currentTransform( currentTransform_ )
      , supportedCompositeAlpha( supportedCompositeAlpha_ )
      , supportedUsageFlags( supportedUsageFlags_ )
    {}

    VULKAN_HPP_CONSTEXPR SurfaceCapabilitiesKHR( SurfaceCapabilitiesKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : minImageCount( rhs.minImageCount )
      , maxImageCount( rhs.maxImageCount )
      , currentExtent( rhs.currentExtent )
      , minImageExtent( rhs.minImageExtent )
      , maxImageExtent( rhs.maxImageExtent )
      , maxImageArrayLayers( rhs.maxImageArrayLayers )
      , supportedTransforms( rhs.supportedTransforms )
      , currentTransform( rhs.currentTransform )
      , supportedCompositeAlpha( rhs.supportedCompositeAlpha )
      , supportedUsageFlags( rhs.supportedUsageFlags )
    {}

    SurfaceCapabilitiesKHR & operator=( SurfaceCapabilitiesKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( SurfaceCapabilitiesKHR ) );
      return *this;
    }

    SurfaceCapabilitiesKHR( VkSurfaceCapabilitiesKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SurfaceCapabilitiesKHR& operator=( VkSurfaceCapabilitiesKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SurfaceCapabilitiesKHR const *>(&rhs);
      return *this;
    }

    operator VkSurfaceCapabilitiesKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSurfaceCapabilitiesKHR*>( this );
    }

    operator VkSurfaceCapabilitiesKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSurfaceCapabilitiesKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SurfaceCapabilitiesKHR const& ) const = default;
#else
    bool operator==( SurfaceCapabilitiesKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( minImageCount == rhs.minImageCount )
          && ( maxImageCount == rhs.maxImageCount )
          && ( currentExtent == rhs.currentExtent )
          && ( minImageExtent == rhs.minImageExtent )
          && ( maxImageExtent == rhs.maxImageExtent )
          && ( maxImageArrayLayers == rhs.maxImageArrayLayers )
          && ( supportedTransforms == rhs.supportedTransforms )
          && ( currentTransform == rhs.currentTransform )
          && ( supportedCompositeAlpha == rhs.supportedCompositeAlpha )
          && ( supportedUsageFlags == rhs.supportedUsageFlags );
    }

    bool operator!=( SurfaceCapabilitiesKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint32_t minImageCount = {};
    uint32_t maxImageCount = {};
    VULKAN_HPP_NAMESPACE::Extent2D currentExtent = {};
    VULKAN_HPP_NAMESPACE::Extent2D minImageExtent = {};
    VULKAN_HPP_NAMESPACE::Extent2D maxImageExtent = {};
    uint32_t maxImageArrayLayers = {};
    VULKAN_HPP_NAMESPACE::SurfaceTransformFlagsKHR supportedTransforms = {};
    VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR currentTransform = VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR::eIdentity;
    VULKAN_HPP_NAMESPACE::CompositeAlphaFlagsKHR supportedCompositeAlpha = {};
    VULKAN_HPP_NAMESPACE::ImageUsageFlags supportedUsageFlags = {};
  };
  static_assert( sizeof( SurfaceCapabilitiesKHR ) == sizeof( VkSurfaceCapabilitiesKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SurfaceCapabilitiesKHR>::value, "struct wrapper is not a standard layout!" );

  struct SurfaceCapabilities2KHR
  {
    VULKAN_HPP_CONSTEXPR SurfaceCapabilities2KHR( VULKAN_HPP_NAMESPACE::SurfaceCapabilitiesKHR surfaceCapabilities_ = {} ) VULKAN_HPP_NOEXCEPT
      : surfaceCapabilities( surfaceCapabilities_ )
    {}

    VULKAN_HPP_CONSTEXPR SurfaceCapabilities2KHR( SurfaceCapabilities2KHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , surfaceCapabilities( rhs.surfaceCapabilities )
    {}

    SurfaceCapabilities2KHR & operator=( SurfaceCapabilities2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SurfaceCapabilities2KHR ) - offsetof( SurfaceCapabilities2KHR, pNext ) );
      return *this;
    }

    SurfaceCapabilities2KHR( VkSurfaceCapabilities2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SurfaceCapabilities2KHR& operator=( VkSurfaceCapabilities2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SurfaceCapabilities2KHR const *>(&rhs);
      return *this;
    }

    operator VkSurfaceCapabilities2KHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSurfaceCapabilities2KHR*>( this );
    }

    operator VkSurfaceCapabilities2KHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSurfaceCapabilities2KHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SurfaceCapabilities2KHR const& ) const = default;
#else
    bool operator==( SurfaceCapabilities2KHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( surfaceCapabilities == rhs.surfaceCapabilities );
    }

    bool operator!=( SurfaceCapabilities2KHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSurfaceCapabilities2KHR;
    void* pNext = {};
    VULKAN_HPP_NAMESPACE::SurfaceCapabilitiesKHR surfaceCapabilities = {};
  };
  static_assert( sizeof( SurfaceCapabilities2KHR ) == sizeof( VkSurfaceCapabilities2KHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SurfaceCapabilities2KHR>::value, "struct wrapper is not a standard layout!" );

#ifdef VK_USE_PLATFORM_WIN32_KHR
  struct SurfaceCapabilitiesFullScreenExclusiveEXT
  {
    VULKAN_HPP_CONSTEXPR SurfaceCapabilitiesFullScreenExclusiveEXT( VULKAN_HPP_NAMESPACE::Bool32 fullScreenExclusiveSupported_ = {} ) VULKAN_HPP_NOEXCEPT
      : fullScreenExclusiveSupported( fullScreenExclusiveSupported_ )
    {}

    VULKAN_HPP_CONSTEXPR SurfaceCapabilitiesFullScreenExclusiveEXT( SurfaceCapabilitiesFullScreenExclusiveEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , fullScreenExclusiveSupported( rhs.fullScreenExclusiveSupported )
    {}

    SurfaceCapabilitiesFullScreenExclusiveEXT & operator=( SurfaceCapabilitiesFullScreenExclusiveEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SurfaceCapabilitiesFullScreenExclusiveEXT ) - offsetof( SurfaceCapabilitiesFullScreenExclusiveEXT, pNext ) );
      return *this;
    }

    SurfaceCapabilitiesFullScreenExclusiveEXT( VkSurfaceCapabilitiesFullScreenExclusiveEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SurfaceCapabilitiesFullScreenExclusiveEXT& operator=( VkSurfaceCapabilitiesFullScreenExclusiveEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SurfaceCapabilitiesFullScreenExclusiveEXT const *>(&rhs);
      return *this;
    }

    SurfaceCapabilitiesFullScreenExclusiveEXT & setPNext( void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    SurfaceCapabilitiesFullScreenExclusiveEXT & setFullScreenExclusiveSupported( VULKAN_HPP_NAMESPACE::Bool32 fullScreenExclusiveSupported_ ) VULKAN_HPP_NOEXCEPT
    {
      fullScreenExclusiveSupported = fullScreenExclusiveSupported_;
      return *this;
    }

    operator VkSurfaceCapabilitiesFullScreenExclusiveEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSurfaceCapabilitiesFullScreenExclusiveEXT*>( this );
    }

    operator VkSurfaceCapabilitiesFullScreenExclusiveEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSurfaceCapabilitiesFullScreenExclusiveEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SurfaceCapabilitiesFullScreenExclusiveEXT const& ) const = default;
#else
    bool operator==( SurfaceCapabilitiesFullScreenExclusiveEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( fullScreenExclusiveSupported == rhs.fullScreenExclusiveSupported );
    }

    bool operator!=( SurfaceCapabilitiesFullScreenExclusiveEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSurfaceCapabilitiesFullScreenExclusiveEXT;
    void* pNext = {};
    VULKAN_HPP_NAMESPACE::Bool32 fullScreenExclusiveSupported = {};
  };
  static_assert( sizeof( SurfaceCapabilitiesFullScreenExclusiveEXT ) == sizeof( VkSurfaceCapabilitiesFullScreenExclusiveEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SurfaceCapabilitiesFullScreenExclusiveEXT>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  struct SurfaceFormatKHR
  {
    VULKAN_HPP_CONSTEXPR SurfaceFormatKHR( VULKAN_HPP_NAMESPACE::Format format_ = VULKAN_HPP_NAMESPACE::Format::eUndefined,
                                           VULKAN_HPP_NAMESPACE::ColorSpaceKHR colorSpace_ = VULKAN_HPP_NAMESPACE::ColorSpaceKHR::eSrgbNonlinear ) VULKAN_HPP_NOEXCEPT
      : format( format_ )
      , colorSpace( colorSpace_ )
    {}

    VULKAN_HPP_CONSTEXPR SurfaceFormatKHR( SurfaceFormatKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : format( rhs.format )
      , colorSpace( rhs.colorSpace )
    {}

    SurfaceFormatKHR & operator=( SurfaceFormatKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( SurfaceFormatKHR ) );
      return *this;
    }

    SurfaceFormatKHR( VkSurfaceFormatKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SurfaceFormatKHR& operator=( VkSurfaceFormatKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SurfaceFormatKHR const *>(&rhs);
      return *this;
    }

    operator VkSurfaceFormatKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSurfaceFormatKHR*>( this );
    }

    operator VkSurfaceFormatKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSurfaceFormatKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SurfaceFormatKHR const& ) const = default;
#else
    bool operator==( SurfaceFormatKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( format == rhs.format )
          && ( colorSpace == rhs.colorSpace );
    }

    bool operator!=( SurfaceFormatKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    VULKAN_HPP_NAMESPACE::Format format = VULKAN_HPP_NAMESPACE::Format::eUndefined;
    VULKAN_HPP_NAMESPACE::ColorSpaceKHR colorSpace = VULKAN_HPP_NAMESPACE::ColorSpaceKHR::eSrgbNonlinear;
  };
  static_assert( sizeof( SurfaceFormatKHR ) == sizeof( VkSurfaceFormatKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SurfaceFormatKHR>::value, "struct wrapper is not a standard layout!" );

  struct SurfaceFormat2KHR
  {
    VULKAN_HPP_CONSTEXPR SurfaceFormat2KHR( VULKAN_HPP_NAMESPACE::SurfaceFormatKHR surfaceFormat_ = {} ) VULKAN_HPP_NOEXCEPT
      : surfaceFormat( surfaceFormat_ )
    {}

    VULKAN_HPP_CONSTEXPR SurfaceFormat2KHR( SurfaceFormat2KHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , surfaceFormat( rhs.surfaceFormat )
    {}

    SurfaceFormat2KHR & operator=( SurfaceFormat2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SurfaceFormat2KHR ) - offsetof( SurfaceFormat2KHR, pNext ) );
      return *this;
    }

    SurfaceFormat2KHR( VkSurfaceFormat2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SurfaceFormat2KHR& operator=( VkSurfaceFormat2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR const *>(&rhs);
      return *this;
    }

    operator VkSurfaceFormat2KHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSurfaceFormat2KHR*>( this );
    }

    operator VkSurfaceFormat2KHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSurfaceFormat2KHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SurfaceFormat2KHR const& ) const = default;
#else
    bool operator==( SurfaceFormat2KHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( surfaceFormat == rhs.surfaceFormat );
    }

    bool operator!=( SurfaceFormat2KHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSurfaceFormat2KHR;
    void* pNext = {};
    VULKAN_HPP_NAMESPACE::SurfaceFormatKHR surfaceFormat = {};
  };
  static_assert( sizeof( SurfaceFormat2KHR ) == sizeof( VkSurfaceFormat2KHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SurfaceFormat2KHR>::value, "struct wrapper is not a standard layout!" );

#ifdef VK_USE_PLATFORM_WIN32_KHR
  struct SurfaceFullScreenExclusiveInfoEXT
  {
    VULKAN_HPP_CONSTEXPR SurfaceFullScreenExclusiveInfoEXT( VULKAN_HPP_NAMESPACE::FullScreenExclusiveEXT fullScreenExclusive_ = VULKAN_HPP_NAMESPACE::FullScreenExclusiveEXT::eDefault ) VULKAN_HPP_NOEXCEPT
      : fullScreenExclusive( fullScreenExclusive_ )
    {}

    VULKAN_HPP_CONSTEXPR SurfaceFullScreenExclusiveInfoEXT( SurfaceFullScreenExclusiveInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , fullScreenExclusive( rhs.fullScreenExclusive )
    {}

    SurfaceFullScreenExclusiveInfoEXT & operator=( SurfaceFullScreenExclusiveInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SurfaceFullScreenExclusiveInfoEXT ) - offsetof( SurfaceFullScreenExclusiveInfoEXT, pNext ) );
      return *this;
    }

    SurfaceFullScreenExclusiveInfoEXT( VkSurfaceFullScreenExclusiveInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SurfaceFullScreenExclusiveInfoEXT& operator=( VkSurfaceFullScreenExclusiveInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SurfaceFullScreenExclusiveInfoEXT const *>(&rhs);
      return *this;
    }

    SurfaceFullScreenExclusiveInfoEXT & setPNext( void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    SurfaceFullScreenExclusiveInfoEXT & setFullScreenExclusive( VULKAN_HPP_NAMESPACE::FullScreenExclusiveEXT fullScreenExclusive_ ) VULKAN_HPP_NOEXCEPT
    {
      fullScreenExclusive = fullScreenExclusive_;
      return *this;
    }

    operator VkSurfaceFullScreenExclusiveInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSurfaceFullScreenExclusiveInfoEXT*>( this );
    }

    operator VkSurfaceFullScreenExclusiveInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSurfaceFullScreenExclusiveInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SurfaceFullScreenExclusiveInfoEXT const& ) const = default;
#else
    bool operator==( SurfaceFullScreenExclusiveInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( fullScreenExclusive == rhs.fullScreenExclusive );
    }

    bool operator!=( SurfaceFullScreenExclusiveInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSurfaceFullScreenExclusiveInfoEXT;
    void* pNext = {};
    VULKAN_HPP_NAMESPACE::FullScreenExclusiveEXT fullScreenExclusive = VULKAN_HPP_NAMESPACE::FullScreenExclusiveEXT::eDefault;
  };
  static_assert( sizeof( SurfaceFullScreenExclusiveInfoEXT ) == sizeof( VkSurfaceFullScreenExclusiveInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SurfaceFullScreenExclusiveInfoEXT>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#ifdef VK_USE_PLATFORM_WIN32_KHR
  struct SurfaceFullScreenExclusiveWin32InfoEXT
  {
    VULKAN_HPP_CONSTEXPR SurfaceFullScreenExclusiveWin32InfoEXT( HMONITOR hmonitor_ = {} ) VULKAN_HPP_NOEXCEPT
      : hmonitor( hmonitor_ )
    {}

    VULKAN_HPP_CONSTEXPR SurfaceFullScreenExclusiveWin32InfoEXT( SurfaceFullScreenExclusiveWin32InfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , hmonitor( rhs.hmonitor )
    {}

    SurfaceFullScreenExclusiveWin32InfoEXT & operator=( SurfaceFullScreenExclusiveWin32InfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SurfaceFullScreenExclusiveWin32InfoEXT ) - offsetof( SurfaceFullScreenExclusiveWin32InfoEXT, pNext ) );
      return *this;
    }

    SurfaceFullScreenExclusiveWin32InfoEXT( VkSurfaceFullScreenExclusiveWin32InfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SurfaceFullScreenExclusiveWin32InfoEXT& operator=( VkSurfaceFullScreenExclusiveWin32InfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SurfaceFullScreenExclusiveWin32InfoEXT const *>(&rhs);
      return *this;
    }

    SurfaceFullScreenExclusiveWin32InfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    SurfaceFullScreenExclusiveWin32InfoEXT & setHmonitor( HMONITOR hmonitor_ ) VULKAN_HPP_NOEXCEPT
    {
      hmonitor = hmonitor_;
      return *this;
    }

    operator VkSurfaceFullScreenExclusiveWin32InfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSurfaceFullScreenExclusiveWin32InfoEXT*>( this );
    }

    operator VkSurfaceFullScreenExclusiveWin32InfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSurfaceFullScreenExclusiveWin32InfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SurfaceFullScreenExclusiveWin32InfoEXT const& ) const = default;
#else
    bool operator==( SurfaceFullScreenExclusiveWin32InfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( hmonitor == rhs.hmonitor );
    }

    bool operator!=( SurfaceFullScreenExclusiveWin32InfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSurfaceFullScreenExclusiveWin32InfoEXT;
    const void* pNext = {};
    HMONITOR hmonitor = {};
  };
  static_assert( sizeof( SurfaceFullScreenExclusiveWin32InfoEXT ) == sizeof( VkSurfaceFullScreenExclusiveWin32InfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SurfaceFullScreenExclusiveWin32InfoEXT>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  struct SurfaceProtectedCapabilitiesKHR
  {
    VULKAN_HPP_CONSTEXPR SurfaceProtectedCapabilitiesKHR( VULKAN_HPP_NAMESPACE::Bool32 supportsProtected_ = {} ) VULKAN_HPP_NOEXCEPT
      : supportsProtected( supportsProtected_ )
    {}

    VULKAN_HPP_CONSTEXPR SurfaceProtectedCapabilitiesKHR( SurfaceProtectedCapabilitiesKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , supportsProtected( rhs.supportsProtected )
    {}

    SurfaceProtectedCapabilitiesKHR & operator=( SurfaceProtectedCapabilitiesKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SurfaceProtectedCapabilitiesKHR ) - offsetof( SurfaceProtectedCapabilitiesKHR, pNext ) );
      return *this;
    }

    SurfaceProtectedCapabilitiesKHR( VkSurfaceProtectedCapabilitiesKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SurfaceProtectedCapabilitiesKHR& operator=( VkSurfaceProtectedCapabilitiesKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SurfaceProtectedCapabilitiesKHR const *>(&rhs);
      return *this;
    }

    SurfaceProtectedCapabilitiesKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    SurfaceProtectedCapabilitiesKHR & setSupportsProtected( VULKAN_HPP_NAMESPACE::Bool32 supportsProtected_ ) VULKAN_HPP_NOEXCEPT
    {
      supportsProtected = supportsProtected_;
      return *this;
    }

    operator VkSurfaceProtectedCapabilitiesKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSurfaceProtectedCapabilitiesKHR*>( this );
    }

    operator VkSurfaceProtectedCapabilitiesKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSurfaceProtectedCapabilitiesKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SurfaceProtectedCapabilitiesKHR const& ) const = default;
#else
    bool operator==( SurfaceProtectedCapabilitiesKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( supportsProtected == rhs.supportsProtected );
    }

    bool operator!=( SurfaceProtectedCapabilitiesKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSurfaceProtectedCapabilitiesKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::Bool32 supportsProtected = {};
  };
  static_assert( sizeof( SurfaceProtectedCapabilitiesKHR ) == sizeof( VkSurfaceProtectedCapabilitiesKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SurfaceProtectedCapabilitiesKHR>::value, "struct wrapper is not a standard layout!" );
} // namespace VULKAN_HPP_NAMESPACE