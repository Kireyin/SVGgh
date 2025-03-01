//
//  SVGgh.h
//  SVGgh
// The MIT License (MIT)

//  Copyright (c) 2011-2014 Glenn R. Howes

//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.

//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.


#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif

#import "GHImageCache.h"
#import "GHRenderable.h"
#import "SVGRendererLayer.h"
#import "SVGParser.h"
#import "SVGRenderer.h"
#import "SVGPrinter.h"
#import "SVGtoPDFConverter.h"
#import "SVGPathGenerator.h"
#if TARGET_OS_OSX
#else
#import "SVGDocumentView.h"
#import "GHButton.h"
#import "GHControl.h"
#import "GHControlFactory.h"
#import "GHSegmentedControl.h"
#import "SVGTabBarItem.h"
#endif
#import "SVGghLoader.h"
#import "GHCSSStyle.h" // not yet implemented, somebody want to implement a CSS parser"

/*! \brief Because views and buttons are dynamically instantiated from Storyboards and Nibs, code for their classes might not link in from a static library. Thus this method to make sure the class gets called at least once from code.
*/
void MakeSureSVGghLinks(void);
