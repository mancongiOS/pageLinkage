//
//  MCPageViewController.h
//  Demo_pageViewController管理多页面
//
//  Created by goulela on 2017/8/17.
//  Copyright © 2017年 MC. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MCPageViewController : UIViewController


/** 可选
 设置属性
 */

@property (nonatomic, assign) CGFloat   barHeight;            // 标题栏的高度  默认我40
@property (nonatomic, assign) CGFloat   blockFont;            // 标题块的字体的大小  默认18
@property (nonatomic, strong) UIColor * blockColor;           // 标题块的背景颜色


/**
 titles              : 设置标题数组
 vcArray             : 设置控制器数组
 blockNormalColor    : 设置按钮文字未选中状态的颜色
 blockSelectedColor  : 设置按钮文字已选中状态的颜色
 currentPage         : 设置当前页
 */
- (void)initWithTitleArray:(NSArray *)titles vcArray:(NSArray *)vcArray blockNormalColor:(UIColor *)blockNormalColor blockSelectedColor:(UIColor *)blockSelectedColor currentPage:(NSInteger)currentPage;

@end
