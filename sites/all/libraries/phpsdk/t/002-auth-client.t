#!/usr/bin/env php
<?php
require_once 'Common.php';
require_once 'lib/Pmp/Sdk/AuthClient.php';

use \Pmp\Sdk\AuthClient as AuthClient;

// plan and connect
list($host, $client_id, $client_secret) = pmp_client_plan(22);
ok( $auth = new AuthClient($host, $client_id, $client_secret), 'instantiate new AuthClient' );

// get a token
ok( $token = $auth->getToken(), 'get token' );
ok( $token->access_token, 'get token - access_token' );
is( $token->token_type, 'Bearer', 'get token - token_type' );
ok( $token->token_issue_date, 'get token - token_issue_date' );
ok( $token->token_expires_in, 'get token - token_expires_in' );
$token = clone($token);

// get the same token
sleep(1);
ok( $token2 = $auth->getToken(), 're-get token' );
is( $token2->access_token, $token->access_token, 're-get token - access_token same' );
is( $token2->token_type, 'Bearer', 're-get token - token_type same' );
is( $token2->token_issue_date, $token->token_issue_date, 're-get token - token_issue_date same' );
is( $token2->token_expires_in, $token->token_expires_in - 1, 're-get token - token_expires_in updated' );
$token2 = clone($token2);

// force-refresh the token
ok( $token3 = $auth->getToken(true), 'refresh token' );
is( $token3->access_token, $token->access_token, 'refresh token - access_token same' );
is( $token3->token_type, 'Bearer', 'refresh token - token_type same' );
is( $token3->token_issue_date, $token->token_issue_date, 'refresh token - token_issue_date same' );
cmp_ok( $token3->token_expires_in, '<=', $token->token_expires_in, 'refresh token - token_expires_in updated' );
$token3 = clone($token3);

// revoke and refresh
ok( $revoke = $auth->revokeToken(), 'revoke token' );
sleep(2);
ok( $token4 = $auth->getToken(), 'revoke get token' );
isnt( $token4->access_token, $token->access_token, 'revoke get token - access_token changed' );
is( $token4->token_type, 'Bearer', 'revoke get token - token_type same' );
cmp_ok( $token4->token_issue_date, '>', $token->token_issue_date, 'revoke get token - token_issue_date bigger' );
cmp_ok( $token4->token_expires_in, '>', 0, 'revoke get token - token_expires_in bigger' );
$token4 = clone($token4);
