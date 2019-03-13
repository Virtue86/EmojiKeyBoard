//
//  PPEmojiPreviewView.h
//  PPStickerKeyboard
//
//  Created by Vernon on 2018/1/14.
//  Copyright © 2018年 Vernon. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PPEmoji;

@interface PPEmojiPreviewView : UIImageView // 长按预览

@property (nonatomic, strong) PPEmoji *emoji;

@end
