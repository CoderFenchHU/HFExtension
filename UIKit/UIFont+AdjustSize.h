//
//  UIFont+AdjustSize.h
//  Buddy
//
//  Created by 胡烽 on 2018/4/10.
//  Copyright © 2018年 person. All rights reserved.
//

/**
    0代码适配APP里的字体 适配规则：字体大小 * 屏幕缩放比
    如果想要让字体不自动适配:
    1 使用扩展属性 originFont 来赋值
    2 如果是在xib中的控件, 可以直接将控件的tag 设置为 负数 < 0
 */

#import <UIKit/UIKit.h>

@interface UIFont (AdjustSize)

/** 原始未经过屏幕适配的字体 */
@property (nonatomic, strong, readonly) UIFont * originFont;

@end

@interface UIButton (AdjustSize)

@end

@interface UILabel (AdjustSize)

@end

@interface UITextField (AdjustSize)

@end

@interface UITextView (AdjustSize)

@end
