//
//  DeviceDetailViewController.h
//  MyStore
//
//  Created by Alexander Kuliev on 9/28/14.
//  Copyright (c) 2014 Alexander Kuliev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeviceDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *versionTextField;
@property (weak, nonatomic) IBOutlet UITextField *companyTextField;

- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;

@property (strong) NSManagedObject *device;

@end
