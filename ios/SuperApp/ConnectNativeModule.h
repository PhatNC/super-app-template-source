//
//  ConnectNativeModule.h
//  SuperApp
//
//  Created by PhatNC on 06/06/2024.
//
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <UIKit/UIKit.h>

@interface ConnectNativeModule : RCTEventEmitter <RCTBridgeModule> {
    UIViewController *vc;
    RCTResponseSenderBlock closeCallBack;
    NSMutableDictionary *emitters;
    NSMutableDictionary *promises;
}

@end
