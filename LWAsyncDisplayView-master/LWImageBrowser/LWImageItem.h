//
//  LWImageItem.h
//  Warmjar2
//
//  Created by 刘微 on 15/10/6.
//  Copyright © 2015年 Warm+. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LWImageBrowserModel.h"
#import "SDWebImageManager.h"
#import "UIImageView+WebCache.h"


@protocol LWImageItemEventDelegate <NSObject>

- (void)didClickedItemToHide;
- (void)didFinishRefreshThumbnailImageIfNeed;

@end

@interface LWImageItem : UIScrollView

@property (nonatomic,weak) id <LWImageItemEventDelegate> eventDelegate;

@property (nonatomic,strong) LWImageBrowserModel* imageModel;
@property (nonatomic,strong) UIImageView* imageView;
@property (nonatomic,assign,getter=isFirstShow) BOOL firstShow;

- (void)loadHdImage:(BOOL)animated;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com