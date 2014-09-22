//
//  ViewController.h
//  Drawing
//
//  Created by Mena W. on 9/18/2557 BE.
//  Copyright (c) 2557 ___FULLUSERNAME___. All rights reserved.
//

//#import <UIKit/UIKit.h>
#import "SettingViewController.h"


@interface ViewController : UIViewController<SettingsViewControllerDelegate, UIActionSheetDelegate> {

CGPoint lastPoint;
CGFloat red;
CGFloat green;
CGFloat blue;
CGFloat brush;
CGFloat opacity;
BOOL mouseSwiped;
    
}

@property (strong, nonatomic) IBOutlet UIImageView *mainImage;
@property (strong, nonatomic) IBOutlet UIImageView *tempDrawImage;

- (IBAction)PencilPressed:(id)sender;

- (IBAction)eraserAction:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)save:(id)sender;
- (IBAction)setting:(id)sender;


@end
