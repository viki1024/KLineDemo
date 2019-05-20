//
//  ENLineLayer.h
//  KLineDemo
//
//  Created by chen on 2018/6/20.
//  Copyright © 2018年 chen. All rights reserved.
//
//  图表中所有的线型图都在这里绘制

#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIKit.h>

@interface ENLineLayer : CAShapeLayer

@property (nonatomic, strong) NSArray *ma7Points;
@property (nonatomic, strong) NSArray *ma30Points;
@property (nonatomic, strong) NSArray *ma99Points;
@property (nonatomic, strong) NSArray *ema7Points;
@property (nonatomic, strong) NSArray *ema30Points;
@property (nonatomic, strong) NSArray *ema99Points;

// BOLL
@property (nonatomic, strong) NSArray *BOLLPoints;
@property (nonatomic, strong) NSArray *UBPoints;
@property (nonatomic, strong) NSArray *DBPoints;
// MACD
@property (nonatomic, strong) NSArray *DIFPoints;
@property (nonatomic, strong) NSArray *DEAPoints;
@property (nonatomic, strong) NSArray *BARPoints;
// KDJ
@property (nonatomic, strong) NSArray *KPoints;
@property (nonatomic, strong) NSArray *DPoints;
@property (nonatomic, strong) NSArray *JPoints;
// RSI
@property (nonatomic, strong) NSArray *RSIPoints;


- (void)drawLines;

@end
