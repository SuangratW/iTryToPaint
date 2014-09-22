//
//  SettingViewController.h
//  Drawing
//
//  Created by Mena W. on 9/18/2557 BE.
//  Copyright (c) 2557 Mena W.. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol SettingsViewControllerDelegate <NSObject>
- (void)closeSettings:(id)sender;
@end




@interface SettingViewController : UIViewController
- (IBAction)closeSettings:(id)sender;
@property (strong, nonatomic) IBOutlet UISlider *brushControl;
@property (strong, nonatomic) IBOutlet UISlider *opacityControl;
@property (strong, nonatomic) IBOutlet UIImageView *brushPreview;
@property (strong, nonatomic) IBOutlet UIImageView *opacityPreview;

@property (strong, nonatomic) IBOutlet UILabel *brushValueLabel;
@property (strong, nonatomic) IBOutlet UILabel *opacityValueLabel;

- (IBAction)SliderChanged:(id)sender;

@property CGFloat brush;
@property CGFloat opacity;

@property (nonatomic, weak) id<SettingsViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UISlider *redControl;
@property (strong, nonatomic) IBOutlet UISlider *greenControl;
@property (strong, nonatomic) IBOutlet UISlider *blueControl;
@property (strong, nonatomic) IBOutlet UILabel *redLabel;
@property (strong, nonatomic) IBOutlet UILabel *greenLabel;
@property (strong, nonatomic) IBOutlet UILabel *blueLabel;

@property CGFloat red;
@property CGFloat green;
@property CGFloat blue;

@end
