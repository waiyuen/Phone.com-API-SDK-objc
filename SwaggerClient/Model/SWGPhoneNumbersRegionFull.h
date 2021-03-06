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




@protocol SWGPhoneNumbersRegionFull
@end

@interface SWGPhoneNumbersRegionFull : SWGObject

/* Optional. Integer representing the international calling code for the phone number's country. [optional]
 */
@property(nonatomic) NSString* countryCode;
/* Optional. Area Code, for North American phone numbers. [optional]
 */
@property(nonatomic) NSNumber* npa;
/* Optional. Second set of 3 digits, for North American phone numbers. [optional]
 */
@property(nonatomic) NSNumber* nxx;
/* Optional. Boolean describing whether the phone numbers in this group are toll free. [optional]
 */
@property(nonatomic) NSNumber* isTollFree;
/* Optional. City name. [optional]
 */
@property(nonatomic) NSString* city;
/* Optional. Two-letter postal code for the state or province. [optional]
 */
@property(nonatomic) NSString* provincePostalCode;
/* Optional. Two-letter postal code for the country. [optional]
 */
@property(nonatomic) NSString* countryPostalCode;
/* Integer. Quantity of phone numbers currently available in the given region. [optional]
 */
@property(nonatomic) NSNumber* quantity;

@end
