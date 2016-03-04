//
//  FWUserProtocols.h
//  FriendWho
//
//  Created by Ken M. Haggerty on 3/4/16.
//  Copyright © 2016 Flatiron School. All rights reserved.
//

#pragma mark - // NOTES //

#pragma mark - // IMPORTS //

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "FWDateProtocols.h"
#import "FWEnrollmentProtocols.h"
#import "FWEmploymentProtocols.h"
#import "FWBookProtocols.h"
#import "FWMusicProtocols.h"
#import "FWRelationshipProtocols.h"
#import "FWPlaceProtocols.h"

#pragma mark - // DEFINITIONS //

#pragma mark - // PROTOCOL (FWUser) //

@protocol FWUser <NSObject>

- (NSString *)name;
- (UIImage *)profilePhoto;
- (NSString *)bio;
- (id <FWBirthday>)birthday;
- (NSSet <id <FWUser>> *)friends;
- (NSSet <id <FWEnrollment>> *)education;
- (NSSet <id <FWEmployment>> *)employment;
- (NSSet <id <FWBook>> *)favoriteBooks;
- (NSSet <id <FWMusic>> *)favoriteMusic;
- (NSSet <NSString *> *)likes;
- (NSSet <id <FWRelationship>> *)relationships;
- (NSString *)religion;
- (NSString *)politics;
- (NSSet <id <FWPlace>> *)places;

@end

#pragma mark - // PROTOCOL (FWUser_PRIVATE) //

@protocol FWUser_PRIVATE <NSObject>

// INITIALIZERS //

- (id)initWithName:(NSString *)name photo:(UIImage *)profilePhoto;

// SETTERS //

- (void)setName:(NSString *)name;
- (void)setProfilePhoto:(UIImage *)profilePhoto;
- (void)setBio:(NSString *)bio;
- (void)setBirthday:(id <FWDate>)birthday;
- (void)setReligion:(NSString *)religion;
- (void)setPolitics:(NSString *)politics;

- (void)setFriends:(NSSet <id <FWUser>> *)friends;
- (void)addFriend:(id <FWUser>)user;
- (void)removeFriend:(id <FWUser>)user;

- (void)setEducation:(NSSet <id <FWEnrollment>> *)education;
- (void)addEducation:(id <FWEnrollment>)enrollment;
- (void)removeEducation:(id <FWEnrollment>)enrollment;

- (void)setEmployment:(NSSet <id <FWEmployment>> *)employment;
- (void)addEmployment:(id <FWEmployment>)employment;
- (void)removeEmployment:(id <FWEmployment>)employment;

- (void)setFavoriteBooks:(NSSet <id <FWBook>> *)favoriteBooks;
- (void)addFavoriteBook:(id <FWBook>)book;
- (void)removeFavoriteBook:(id <FWBook>)book;

- (void)setFavoriteMusic:(NSSet <id <FWMusic>> *)favoriteMusic;
- (void)addFavoriteMusic:(id <FWMusic>)music;
- (void)removeFavoriteMusic:(id <FWMusic>)music;

- (void)setLikes:(NSSet <NSString *> *)likes;
- (void)addLike:(NSString *)topic;
- (void)removeLike:(NSString *)topic;

- (void)setRelationships:(NSSet <id <FWRelationship>> *)relationships;
- (void)addRelationship:(id <FWRelationship>)relationship;
- (void)removeRelationship:(id <FWRelationship>)relationship;

- (void)setPlaces:(NSSet <id <FWPlace>> *)places;
- (void)addPlace:(id <FWPlace>)place;
- (void)removePlace:(id <FWPlace>)place;

@end
