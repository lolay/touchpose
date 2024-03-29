// Copyright 2012 Todd Reed
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#import <UIKit/UIKit.h>

@interface QTouchposeApplication : UIApplication

@property (nonatomic) UIColor* borderColor;
@property (nonatomic) UIColor* backgroundColor;
@property (nonatomic, assign) BOOL showTouches;
@property (nonatomic, assign) BOOL alwaysShowTouches;
@property (nonatomic, assign) BOOL showTouchesWhenKeyboardShown;
@property (nonatomic, assign) BOOL animates;
@property (nonatomic, assign) CGFloat animationDuration;

@end