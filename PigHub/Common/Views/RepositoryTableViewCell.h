//
//  RepositoryCellViewTableViewCell.h
//  PigHub
//
//  Created by Rainbow on 2017/1/11.
//  Copyright © 2017年 PizzaLiu. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface RepositoryTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *orderLabel;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *descLabel;
@property (weak, nonatomic) IBOutlet UILabel *starLabel;
@property (weak, nonatomic) IBOutlet UIImageView *avatarImage;
@property (weak, nonatomic) IBOutlet UILabel *ownerLabel;

+ (float) cellHeight;

@end
