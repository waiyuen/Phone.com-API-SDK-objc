#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Phone.com API
* This is a Phone.com api Swagger definition
*
* OpenAPI spec version: 1.0.0
* Contact: apisupport@phone.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGFilterIdArray.h"
#import "SWGOauthClientRedirectUriFull.h"


@protocol SWGListOauthClientsRedirectUris
@end

@interface SWGListOauthClientsRedirectUris : SWGObject


@property(nonatomic) SWGFilterIdArray* filters;

@property(nonatomic) NSNumber* total;

@property(nonatomic) NSNumber* offset;

@property(nonatomic) NSNumber* limit;

@property(nonatomic) NSArray<SWGOauthClientRedirectUriFull>* items;

@end
