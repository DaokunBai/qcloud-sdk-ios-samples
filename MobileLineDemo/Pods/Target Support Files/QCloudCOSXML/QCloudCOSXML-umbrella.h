#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "QCloudCOSXMLEndPoint.h"
#import "QCloudCOSXMLService+Configuration.h"
#import "QCloudCOSXMLService+Private.h"
#import "QCloudCOSXMLService.h"
#import "QCloudCOSXMLServiceUtilities.h"
#import "QCloudRequestData+COSXMLVersion.h"
#import "CASJobParameters.h"
#import "QCloudACLGrant.h"
#import "QCloudACLGrantee.h"
#import "QCloudACLOwner.h"
#import "QCloudACLPolicy.h"
#import "QCloudAppendObjectRequest.h"
#import "QCloudBucket.h"
#import "QCloudBucketContents.h"
#import "QCloudBucketLocationConstraint.h"
#import "QCloudBucketOwner.h"
#import "QCloudBucketReplicationConfiguation.h"
#import "QCloudBucketReplicationDestination.h"
#import "QCloudBucketReplicationRule.h"
#import "QCloudBucketVersioningConfiguration.h"
#import "QCloudCASTierEnum.h"
#import "QCloudCommonPrefixes.h"
#import "QCloudCORSConfiguration.h"
#import "QCloudCORSRule.h"
#import "QCloudCOSAccountTypeEnum.h"
#import "QCloudCOSBucketVersioningStatusEnum.h"
#import "QCloudCOSPermissionEnum.h"
#import "QCloudCOSXMLService+Manager.h"
#import "QCloudCOSXMLStatusEnum.h"
#import "QCloudDeleteBucketCORSRequest.h"
#import "QCloudDeleteBucketLifeCycleRequest.h"
#import "QCloudDeleteBucketReplicationRequest.h"
#import "QCloudDeleteBucketRequest.h"
#import "QCloudDeleteInfo.h"
#import "QCloudDeleteMarker.h"
#import "QCloudDeleteMultipleObjectRequest.h"
#import "QCloudDeleteObjectInfo.h"
#import "QCloudDeleteObjectRequest.h"
#import "QCloudDeleteResult.h"
#import "QCloudDeleteResultRow.h"
#import "QCloudGetBucketACLRequest.h"
#import "QCloudGetBucketCORSRequest.h"
#import "QCloudGetBucketLifecycleRequest.h"
#import "QCloudGetBucketLocationRequest.h"
#import "QCloudGetBucketReplicationRequest.h"
#import "QCloudGetBucketRequest.h"
#import "QCloudGetBucketVersioningRequest.h"
#import "QCloudGetObjectACLRequest.h"
#import "QCloudGetObjectRequest+Custom.h"
#import "QCloudGetPresignedURLRequest.h"
#import "QCloudGetPresignedURLResult.h"
#import "QCloudGetServiceRequest+Custom.h"
#import "QCloudGetServiceRequest.h"
#import "QCloudHeadBucketRequest.h"
#import "QCloudLifecycleAbortIncompleteMultipartUpload.h"
#import "QCloudLifecycleConfiguration.h"
#import "QCloudLifecycleExpiration.h"
#import "QCloudLifecycleRule.h"
#import "QCloudLifecycleRuleFilter.h"
#import "QCloudLifecycleRuleFilterAnd.h"
#import "QCloudLifecycleStatueEnum.h"
#import "QCloudLifecycleTag.h"
#import "QCloudLifecycleTransition.h"
#import "QCloudListAllMyBucketsResult.h"
#import "QCloudListBucketMultipartUploadsRequest.h"
#import "QCloudListBucketResult.h"
#import "QCloudListMultipartUploadContent.h"
#import "QCloudListMultipartUploadsResult.h"
#import "QCloudListObjectVersionsRequest.h"
#import "QCloudListVersionsResult.h"
#import "QCloudNoncurrentVersionExpiration.h"
#import "QCloudNoncurrentVersionTransition.h"
#import "QCloudOptionsObjectRequest.h"
#import "QCloudOwner.h"
#import "QCloudPostObjectRestoreRequest.h"
#import "QCloudPutBucketACLRequest.h"
#import "QCloudPutBucketCORSRequest.h"
#import "QCloudPutBucketLifecycleRequest.h"
#import "QCloudPutBucketReplicationRequest.h"
#import "QCloudPutBucketRequest.h"
#import "QCloudPutBucketVersioningRequest.h"
#import "QCloudPutObjectACLRequest.h"
#import "QCloudRestoreRequest.h"
#import "QCloudVersionContent.h"
#import "QCloudVersionOwner.h"
#import "QCloudCOSXML.h"
#import "QCloudCOSXMLVersion.h"
#import "QCloudAbortMultipfartUploadRequest.h"
#import "QCloudCompleteMultipartUploadInfo.h"
#import "QCloudCompleteMultipartUploadRequest.h"
#import "QCloudCopyObjectResult.h"
#import "QCloudCOSStorageClassEnum.h"
#import "QCloudCOSTransferMangerService.h"
#import "QCloudCOSXMLCopyObjectRequest.h"
#import "QCloudCOSXMLService+Transfer.h"
#import "QCloudCOSXMLTransfer.h"
#import "QCloudCOSXMLUploadObjectRequest.h"
#import "QCloudCOSXMLUploadObjectRequest_Private.h"
#import "QCloudGetObjectRequest.h"
#import "QCloudHeadObjectRequest.h"
#import "QCloudInitiateMultipartUploadRequest.h"
#import "QCloudInitiateMultipartUploadResult.h"
#import "QCloudListMultipartRequest.h"
#import "QCloudListPartsResult.h"
#import "QCloudMultipartInfo.h"
#import "QCloudMultipartUploadInitiator.h"
#import "QCloudMultipartUploadOwner.h"
#import "QCloudMultipartUploadPart.h"
#import "QCloudPutObjectCopyRequest.h"
#import "QCloudPutObjectRequest+CustomBuild.h"
#import "QCloudPutObjectRequest.h"
#import "QCloudUploadObjectResult.h"
#import "QCloudUploadPartCopyRequest.h"
#import "QCloudUploadPartRequest+Custom.h"
#import "QCloudUploadPartRequest.h"
#import "QCloudUploadPartResult.h"

FOUNDATION_EXPORT double QCloudCOSXMLVersionNumber;
FOUNDATION_EXPORT const unsigned char QCloudCOSXMLVersionString[];

